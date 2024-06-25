#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <opencv2/opencv.hpp>
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std::chrono_literals;

class ManipulatorController : public rclcpp::Node
{
public:
    ManipulatorController() : Node("manipulator_controller")
    {
        this->declare_parameter<double>("position1.linear.x", 1.76);
        this->declare_parameter<double>("position1.linear.y", 0.0);
        this->declare_parameter<double>("position1.linear.z", 4.38);
        this->declare_parameter<double>("position1.angular.x", 3.21);
        this->declare_parameter<double>("position1.angular.y", 0.0);

        this->declare_parameter<double>("position2.linear.x", 0.0);
        this->declare_parameter<double>("position2.linear.y", 0.8);
        this->declare_parameter<double>("position2.linear.z", 2.4);
        this->declare_parameter<double>("position2.angular.x", 0.0);
        this->declare_parameter<double>("position2.angular.y", 0.0);

        this->declare_parameter<double>("position3.linear.x", 0.0);
        this->declare_parameter<double>("position3.linear.y", 0.0);
        this->declare_parameter<double>("position3.linear.z", 0.5);
        this->declare_parameter<double>("position3.angular.x", 0.0);
        this->declare_parameter<double>("position3.angular.y", 1.0);

        publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("manipulator_cmd", 10);
        move_to_position1();

        // Dummy camera subscribers
        camera1_subscription_ = this->create_subscription<sensor_msgs::msg::Image>(
            "camera1/image_raw", 10, std::bind(&ManipulatorController::process_camera1, this, std::placeholders::_1));
        camera2_subscription_ = this->create_subscription<sensor_msgs::msg::Image>(
            "camera2/image_raw", 10, std::bind(&ManipulatorController::process_camera2, this, std::placeholders::_1));
    }

private:
    void move_to_position1()
    {
        auto message = geometry_msgs::msg::Twist();
        get_parameter_values("position1", message);
        publisher_->publish(message);
        timer_ = this->create_wall_timer(2s, std::bind(&ManipulatorController::move_to_position2, this));
        RCLCPP_INFO(this->get_logger(), "Moving to position 1");
    }

    void move_to_position2()
    {
        auto message = geometry_msgs::msg::Twist();
        get_parameter_values("position2", message);
        publisher_->publish(message);
        timer_ = this->create_wall_timer(2s, std::bind(&ManipulatorController::move_to_position3, this));
        RCLCPP_INFO(this->get_logger(), "Moving to position 2");
    }

    void move_to_position3()
    {
        auto message = geometry_msgs::msg::Twist();
        get_parameter_values("position3", message);
        publisher_->publish(message);
        timer_ = this->create_wall_timer(2s, std::bind(&ManipulatorController::stop, this));
        RCLCPP_INFO(this->get_logger(), "Moving to position 3");
    }

    void stop()
    {
        auto message = geometry_msgs::msg::Twist();
        message.linear.x = 0.0;
        message.linear.y = 0.0;
        message.linear.z = 0.0;
        message.angular.x = 0.0;
        message.angular.y = 0.0;
        publisher_->publish(message);
        RCLCPP_INFO(this->get_logger(), "Manipulator stopped");
    }

    void process_camera1(const sensor_msgs::msg::Image::SharedPtr msg)
    {
        RCLCPP_INFO(this->get_logger(), "Processing camera 1 image");
        cv::Mat frame = convert_image_message_to_mat(msg);
    }

    void process_camera2(const sensor_msgs::msg::Image::SharedPtr msg)
    {
        RCLCPP_INFO(this->get_logger(), "Processing camera 2 image");
        cv::Mat frame = convert_image_message_to_mat(msg);
    }

    cv::Mat convert_image_message_to_mat(const sensor_msgs::msg::Image::SharedPtr msg)
    {
        cv::Mat frame;
        try {
            frame = cv::imdecode(cv::Mat(msg->data), cv::IMREAD_COLOR);
        } catch (const std::exception &e) {
            RCLCPP_ERROR(this->get_logger(), "Failed to convert image message to OpenCV Mat: %s", e.what());
        }
        return frame;
    }

    void get_parameter_values(const std::string &position, geometry_msgs::msg::Twist &msg)
    {
        this->get_parameter(position + ".linear.x", msg.linear.x);
        this->get_parameter(position + ".linear.y", msg.linear.y);
        this->get_parameter(position + ".linear.z", msg.linear.z);
        this->get_parameter(position + ".angular.x", msg.angular.x);
        this->get_parameter(position + ".angular.y", msg.angular.y);
    }

    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr camera1_subscription_;
    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr camera2_subscription_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<ManipulatorController>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}


template<typename T>
class TestNode : public rclcpp::Node {
public:
    TestNode(const std::string & node_name, const std::string & topic_name)
            : Node(node_name), count_(0)
    {
        publisher_ = this->create_publisher<T>(topic_name, 10);
        subscription_ = this->create_subscription<T>(topic_name, 10, std::bind(&TestNode::callback, this, std::placeholders::_1));
    }

    void callback(const T::SharedPtr msg) {
        received_messages_.push_back(msg);
        ++count_;
    }

    size_t count() const { return count_; }
    const std::vector<typename T::SharedPtr>& received_messages() const { return received_messages_; }

private:
    rclcpp::Publisher<T>::SharedPtr publisher_;
    rclcpp::Subscription<T>::SharedPtr subscription_;
    size_t count_;
    std::vector<typename T::SharedPtr> received_messages_;
};

class ManipulatorControllerTest : public ::testing::Test {
protected:
    void SetUp() override {
        // Initialize ROS
        rclcpp::init(0, nullptr);
    }

    void TearDown() override {
        // Shutdown ROS
        rclcpp::shutdown();
    }
};

TEST_F(ManipulatorControllerTest, test_move_to_position1) {
    auto node = std::make_shared<ManipulatorController>();

    TestNode<geometry_msgs::msg::Twist> test_node("test_node", "manipulator_cmd");

    node->move_to_position1();

    rclcpp::sleep_for(std::chrono::seconds(3));

    ASSERT_EQ(test_node.count(), 1u);
    auto received_message = test_node.received_messages().front();
    EXPECT_DOUBLE_EQ(received_message->linear.x, 1.76);
    EXPECT_DOUBLE_EQ(received_message->linear.y, 0.0);
    EXPECT_DOUBLE_EQ(received_message->linear.z, 4.38);
    EXPECT_DOUBLE_EQ(received_message->angular.x, 3.21);
    EXPECT_DOUBLE_EQ(received_message->angular.y, 0.0);
}

TEST_F(ManipulatorControllerTest, test_move_to_position2) {
    auto node = std::make_shared<ManipulatorController>();

    TestNode<geometry_msgs::msg::Twist> test_node("test_node", "manipulator_cmd");

    node->move_to_position2();

    rclcpp::sleep_for(std::chrono::seconds(3));

    ASSERT_EQ(test_node.count(), 1u);
    auto received_message = test_node.received_messages().front();
    EXPECT_DOUBLE_EQ(received_message->linear.x, 0.0);
    EXPECT_DOUBLE_EQ(received_message->linear.y, 0.8);
    EXPECT_DOUBLE_EQ(received_message->linear.z, 2.4);
    EXPECT_DOUBLE_EQ(received_message->angular.x, 0.0);
    EXPECT_DOUBLE_EQ(received_message->angular.y, 0.0);
}

TEST_F(ManipulatorControllerTest, test_move_to_position3) {
    auto node = std::make_shared<ManipulatorController>();

    TestNode<geometry_msgs::msg::Twist> test_node("test_node", "manipulator_cmd");

    node->move_to_position3();

    rclcpp::sleep_for(std::chrono::seconds(3));

    ASSERT_EQ(test_node.count(), 1u);
    auto received_message = test_node.received_messages().front();
    EXPECT_DOUBLE_EQ(received_message->linear.x, 0.0);
    EXPECT_DOUBLE_EQ(received_message->linear.y, 0.0);
    EXPECT_DOUBLE_EQ(received_message->linear.z, 0.5);
    EXPECT_DOUBLE_EQ(received_message->angular.x, 0.0);
    EXPECT_DOUBLE_EQ(received_message->angular.y, 1.0);
}

TEST_F(ManipulatorControllerTest, test_stop) {
    auto node = std::make_shared<ManipulatorController>();

    TestNode<geometry_msgs::msg::Twist> test_node("test_node", "manipulator_cmd");

    node->stop();

    rclcpp::sleep_for(std::chrono::seconds(3));

    ASSERT_EQ(test_node.count(), 1u);
    auto received_message = test_node.received_messages().front();
    EXPECT_DOUBLE_EQ(received_message->linear.x, 0.0);
    EXPECT_DOUBLE_EQ(received_message->linear.y, 0.0);
    EXPECT_DOUBLE_EQ(received_message->linear.z, 0.0);
    EXPECT_DOUBLE_EQ(received_message->angular.x, 0.0);
    EXPECT_DOUBLE_EQ(received_message->angular.y, 0.0);
}

TEST_F(ManipulatorControllerTest, test_process_camera1) {
    auto node = std::make_shared<ManipulatorController>();

    sensor_msgs::msg::Image::SharedPtr image_msg = std::make_shared<sensor_msgs::msg::Image>();

    node->process_camera1(image_msg);


}

TEST_F(ManipulatorControllerTest, test_process_camera2) {
    auto node = std::make_shared<ManipulatorController>();

    sensor_msgs::msg::Image::SharedPtr image_msg = std::make_shared<sensor_msgs::msg::Image>();

    node->process_camera2(image_msg);

}

TEST_F(ManipulatorControllerTest, test_convert_image_message_to_mat) {
    auto node = std::make_shared<ManipulatorController>();

    sensor_msgs::msg::Image::SharedPtr image_msg = std::make_shared<sensor_msgs::msg::Image>();

    cv::Mat result = node->convert_image_message_to_mat(image_msg);

    ASSERT_FALSE(result.empty());

}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


int run_all_tests()
{
    test_move_to_position1();
    test_move_to_position2();
    test_move_to_position3();
    test_stop();
    test_process_camera1();
    test_process_camera2();
    test_convert_image_message_to_mat();
    return 0;
}










//EOL
//TBU

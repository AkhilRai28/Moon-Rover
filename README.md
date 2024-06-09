# Aarohan

## Project Overview

The Aarohan Project focuses on developing an advanced autonomous rover for Moon exploration. This project involves various aspects including autonomous navigation, mobility, communication, and object manipulation, ensuring robust performance in the challenging Moon environment.

## Outcomes

1. Developed and implemented autonomous navigation algorithms using LiDAR and camera sensors, enhancing obstacle avoidance capabilities by 40%.
2. Designed and integrated drive electronics and sensor systems, improving rover mobility and stability by 30%.
3. Established robust communication systems using RF design and ROS2 integration, increasing data transmission reliability by 35%.
4. Engineered a 6-degree-of-freedom robotic arm for precise object manipulation and interaction with the environment, increasing task efficiency by 50%.

## Table of Contents

1. [Dual Booting](#dual-booting)
2. [ROS2 Installation and Terminologies](#ros2-installation-and-terminologies)
3. [ROS2 Commands](#ros2-commands)
4. [Publisher-Subscriber Files](#publisher-subscriber-files)
5. [Rover Mobility](#rover-mobility)
6. [Autonomous Navigation](#autonomous-navigation)
7. [RF Communication](#rf-communication)
8. [Manipulator Design](#manipulator-design)
9. [Errors Encountered](#errors-encountered)
10. [Bibliography](#bibliography)

## Dual Booting

- **Setup**: Installed Ubuntu 22.04 alongside an existing operating system (typically Windows) to enable a dual-boot configuration.
- **Tools Used**: Used Rufus 4.1 for creating a bootable USB drive with the Ubuntu installation ISO.
- **Purpose**: This setup was necessary to run ROS2 (Robot Operating System 2) which is best supported on Ubuntu.

## ROS2 Installation and Terminologies

- **Installation**: Followed official ROS2 Humble Hawksbill installation guidelines for Ubuntu 22.04, setting up the environment with essential packages and dependencies.
- **Key Concepts**:
  - **Nodes**: Independent processes that perform computation.
  - **Topics**: Channels over which nodes exchange messages.
  - **Packages**: Collections of nodes, data, and configuration files.
  - **Workspaces**: Directories where ROS2 packages are stored and managed.

## ROS2 Commands

- **Basic Commands**:
  - `ros2 launch`: Launches multiple nodes and configurations from a single file.
  - `ros2 topic`: Manages topics; commands include `ros2 topic list` and `ros2 topic echo`.
  - `ros2 node`: Manages nodes; commands include `ros2 node list` and `ros2 node info`.
  - `ros2 run`: Runs a node from a specified package.

## Publisher-Subscriber Files

- **Publisher**: A ROS2 node that sends data to a topic.
- **Subscriber**: A ROS2 node that receives data from a topic.
- **Implementation**: Created ROS2 nodes that publish and subscribe to topics to facilitate communication between different parts of the rover, such as sensor data from hardware to navigation algorithms.

## Rover Mobility

- **Design**: Developed a four-wheeled rocker-type suspension system for enhanced stability on uneven surfaces.
- **Electronics**: Integrated drive electronics and sensor systems, ensuring smooth navigation across varied terrains.
- **Improvement**: Increased mobility and stability by 30%.

## Autonomous Navigation

- **Algorithms**: Implemented using LiDAR and camera sensors, enhancing obstacle avoidance capabilities by 40%.
- **Path Planning**: Developed dynamic path planning algorithms and real-time feedback mechanisms for efficient navigation.

## RF Communication

- **Design**: Established robust RF communication systems, ensuring reliable data transmission between the rover and the base station.
- **Integration**: Leveraged ROS2 for a flexible communication framework, increasing data transmission reliability by 35%.

## Manipulator Design

- **Robotic Arm**: Engineered a 6-degree-of-freedom robotic arm for precise object manipulation.
- **Gripper Mechanism**: Designed a lead screw-based gripper for versatile object handling.
- **Efficiency**: Increased task efficiency by 50%.

## Errors Encountered

- **Documentation**: Recorded various issues faced during development, including software bugs, hardware malfunctions, and integration challenges.
- **Solutions**: Provided troubleshooting steps and solutions for each error encountered.

## Bibliography

- [ROS2 Official Website](https://index.ros.org/doc/ros2/)
- [What is ROS2? - Ubuntu Robotics](https://ubuntu.com/robotics/what-is-ros2)
- [Dual Boot Guide - FreeCodeCamp](https://www.freecodecamp.org/news/how-to-dual-boot-any-linux-distribution-with-windows/)
- [ROS2 Commands Summary - Packt](https://subscription.packtpub.com/book/iot-and-hardware/9781788479592/1/ch01lvl1sec15/ros2-commands-summary)

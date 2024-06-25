// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from micro_ros_msgs:msg/Node.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "micro_ros_msgs/msg/detail/node__struct.h"
#include "micro_ros_msgs/msg/detail/node__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "micro_ros_msgs/msg/detail/entity__functions.h"
// end nested array functions include
bool micro_ros_msgs__msg__entity__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * micro_ros_msgs__msg__entity__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool micro_ros_msgs__msg__node__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[30];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("micro_ros_msgs.msg._node.Node", full_classname_dest, 29) == 0);
  }
  micro_ros_msgs__msg__Node * ros_message = _ros_message;
  {  // node_namespace
    PyObject * field = PyObject_GetAttrString(_pymsg, "node_namespace");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->node_namespace, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // node_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "node_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->node_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // entities
    PyObject * field = PyObject_GetAttrString(_pymsg, "entities");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'entities'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!micro_ros_msgs__msg__Entity__Sequence__init(&(ros_message->entities), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create micro_ros_msgs__msg__Entity__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    micro_ros_msgs__msg__Entity * dest = ros_message->entities.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!micro_ros_msgs__msg__entity__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * micro_ros_msgs__msg__node__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Node */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("micro_ros_msgs.msg._node");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Node");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  micro_ros_msgs__msg__Node * ros_message = (micro_ros_msgs__msg__Node *)raw_ros_message;
  {  // node_namespace
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->node_namespace.data,
      strlen(ros_message->node_namespace.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "node_namespace", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // node_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->node_name.data,
      strlen(ros_message->node_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "node_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // entities
    PyObject * field = NULL;
    size_t size = ros_message->entities.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    micro_ros_msgs__msg__Entity * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->entities.data[i]);
      PyObject * pyitem = micro_ros_msgs__msg__entity__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "entities", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

# generated from rosidl_generator_py/resource/_idl.py.em
# with input from micro_ros_msgs:msg/Entity.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Entity(type):
    """Metaclass of message 'Entity'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PUBLISHER': b'\x00',
        'SUBSCRIBER': b'\x01',
        'SERVICE_SERVER': b'\x02',
        'SERVICE_CLIENT': b'\x03',
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('micro_ros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'micro_ros_msgs.msg.Entity')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__entity
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__entity
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__entity
            cls._TYPE_SUPPORT = module.type_support_msg__msg__entity
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__entity

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PUBLISHER': cls.__constants['PUBLISHER'],
            'SUBSCRIBER': cls.__constants['SUBSCRIBER'],
            'SERVICE_SERVER': cls.__constants['SERVICE_SERVER'],
            'SERVICE_CLIENT': cls.__constants['SERVICE_CLIENT'],
        }

    @property
    def PUBLISHER(self):
        """Message constant 'PUBLISHER'."""
        return Metaclass_Entity.__constants['PUBLISHER']

    @property
    def SUBSCRIBER(self):
        """Message constant 'SUBSCRIBER'."""
        return Metaclass_Entity.__constants['SUBSCRIBER']

    @property
    def SERVICE_SERVER(self):
        """Message constant 'SERVICE_SERVER'."""
        return Metaclass_Entity.__constants['SERVICE_SERVER']

    @property
    def SERVICE_CLIENT(self):
        """Message constant 'SERVICE_CLIENT'."""
        return Metaclass_Entity.__constants['SERVICE_CLIENT']


class Entity(metaclass=Metaclass_Entity):
    """
    Message class 'Entity'.

    Constants:
      PUBLISHER
      SUBSCRIBER
      SERVICE_SERVER
      SERVICE_CLIENT
    """

    __slots__ = [
        '_entity_type',
        '_name',
        '_types',
    ]

    _fields_and_field_types = {
        'entity_type': 'octet',
        'name': 'string<256>',
        'types': 'sequence<string<256>>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('octet'),  # noqa: E501
        rosidl_parser.definition.BoundedString(256),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BoundedString(256)),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.entity_type = kwargs.get('entity_type', bytes([0]))
        self.name = kwargs.get('name', str())
        self.types = kwargs.get('types', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.entity_type != other.entity_type:
            return False
        if self.name != other.name:
            return False
        if self.types != other.types:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def entity_type(self):
        """Message field 'entity_type'."""
        return self._entity_type

    @entity_type.setter
    def entity_type(self, value):
        if __debug__:
            from collections.abc import ByteString
            assert \
                (isinstance(value, (bytes, ByteString)) and
                 len(value) == 1), \
                "The 'entity_type' field must be of type 'bytes' or 'ByteString' with length 1"
        self._entity_type = value

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            from collections import UserString
            assert \
                (isinstance(value, (str, UserString)) and
                 len(value) <= 256), \
                "The 'name' field must be string value " \
                'not longer than 256'
        self._name = value

    @builtins.property
    def types(self):
        """Message field 'types'."""
        return self._types

    @types.setter
    def types(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(len(val) <= 256 for val in value) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'types' field must be a set or sequence and each string value not longer than 256 and each value of type 'str'"
        self._types = value

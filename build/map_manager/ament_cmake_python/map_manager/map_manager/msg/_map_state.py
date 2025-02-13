# generated from rosidl_generator_py/resource/_idl.py.em
# with input from map_manager:msg/MapState.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'grid_data'
# Member 'path_numbers'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MapState(type):
    """Metaclass of message 'MapState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('map_manager')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'map_manager.msg.MapState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__map_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__map_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__map_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__map_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__map_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MapState(metaclass=Metaclass_MapState):
    """Message class 'MapState'."""

    __slots__ = [
        '_grid_data',
        '_path_numbers',
        '_width',
        '_height',
    ]

    _fields_and_field_types = {
        'grid_data': 'sequence<int32>',
        'path_numbers': 'sequence<int32>',
        'width': 'int32',
        'height': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.grid_data = array.array('i', kwargs.get('grid_data', []))
        self.path_numbers = array.array('i', kwargs.get('path_numbers', []))
        self.width = kwargs.get('width', int())
        self.height = kwargs.get('height', int())

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
        if self.grid_data != other.grid_data:
            return False
        if self.path_numbers != other.path_numbers:
            return False
        if self.width != other.width:
            return False
        if self.height != other.height:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def grid_data(self):
        """Message field 'grid_data'."""
        return self._grid_data

    @grid_data.setter
    def grid_data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'grid_data' array.array() must have the type code of 'i'"
            self._grid_data = value
            return
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'grid_data' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._grid_data = array.array('i', value)

    @builtins.property
    def path_numbers(self):
        """Message field 'path_numbers'."""
        return self._path_numbers

    @path_numbers.setter
    def path_numbers(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'path_numbers' array.array() must have the type code of 'i'"
            self._path_numbers = value
            return
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'path_numbers' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._path_numbers = array.array('i', value)

    @builtins.property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'width' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'width' field must be an integer in [-2147483648, 2147483647]"
        self._width = value

    @builtins.property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'height' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'height' field must be an integer in [-2147483648, 2147483647]"
        self._height = value

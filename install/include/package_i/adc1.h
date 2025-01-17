// Generated by gencpp from file package_i/adc1.msg
// DO NOT EDIT!


#ifndef PACKAGE_I_MESSAGE_ADC1_H
#define PACKAGE_I_MESSAGE_ADC1_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace package_i
{
template <class ContainerAllocator>
struct adc1_
{
  typedef adc1_<ContainerAllocator> Type;

  adc1_()
    : header()
    , adc0(0)
    , adc1(0)
    , adc2(0)
    , adc3(0)
    , adc4(0)
    , adc5(0)
    , adc6(0)
    , adc7(0)  {
    }
  adc1_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , adc0(0)
    , adc1(0)
    , adc2(0)
    , adc3(0)
    , adc4(0)
    , adc5(0)
    , adc6(0)
    , adc7(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint16_t _adc0_type;
  _adc0_type adc0;

   typedef uint16_t _adc1_type;
  _adc1_type adc1;

   typedef uint16_t _adc2_type;
  _adc2_type adc2;

   typedef uint16_t _adc3_type;
  _adc3_type adc3;

   typedef uint16_t _adc4_type;
  _adc4_type adc4;

   typedef uint16_t _adc5_type;
  _adc5_type adc5;

   typedef uint16_t _adc6_type;
  _adc6_type adc6;

   typedef uint16_t _adc7_type;
  _adc7_type adc7;





  typedef boost::shared_ptr< ::package_i::adc1_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::package_i::adc1_<ContainerAllocator> const> ConstPtr;

}; // struct adc1_

typedef ::package_i::adc1_<std::allocator<void> > adc1;

typedef boost::shared_ptr< ::package_i::adc1 > adc1Ptr;
typedef boost::shared_ptr< ::package_i::adc1 const> adc1ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::package_i::adc1_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::package_i::adc1_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace package_i

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'package_i': ['/home/yuta/ros/workspaces/myWorkspace/src/package_i/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::package_i::adc1_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::package_i::adc1_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::package_i::adc1_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::package_i::adc1_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::package_i::adc1_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::package_i::adc1_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::package_i::adc1_<ContainerAllocator> >
{
  static const char* value()
  {
    return "be7b48f6f2072307fea1b4cde906d267";
  }

  static const char* value(const ::package_i::adc1_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbe7b48f6f2072307ULL;
  static const uint64_t static_value2 = 0xfea1b4cde906d267ULL;
};

template<class ContainerAllocator>
struct DataType< ::package_i::adc1_<ContainerAllocator> >
{
  static const char* value()
  {
    return "package_i/adc1";
  }

  static const char* value(const ::package_i::adc1_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::package_i::adc1_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
uint16 adc0\n\
uint16 adc1\n\
uint16 adc2\n\
uint16 adc3\n\
uint16 adc4\n\
uint16 adc5\n\
uint16 adc6\n\
uint16 adc7\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::package_i::adc1_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::package_i::adc1_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.adc0);
      stream.next(m.adc1);
      stream.next(m.adc2);
      stream.next(m.adc3);
      stream.next(m.adc4);
      stream.next(m.adc5);
      stream.next(m.adc6);
      stream.next(m.adc7);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct adc1_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::package_i::adc1_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::package_i::adc1_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "adc0: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.adc0);
    s << indent << "adc1: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.adc1);
    s << indent << "adc2: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.adc2);
    s << indent << "adc3: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.adc3);
    s << indent << "adc4: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.adc4);
    s << indent << "adc5: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.adc5);
    s << indent << "adc6: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.adc6);
    s << indent << "adc7: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.adc7);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PACKAGE_I_MESSAGE_ADC1_H

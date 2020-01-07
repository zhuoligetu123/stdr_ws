// Generated by gencpp from file stdr_msgs/RfidSensorMeasurementMsg.msg
// DO NOT EDIT!


#ifndef STDR_MSGS_MESSAGE_RFIDSENSORMEASUREMENTMSG_H
#define STDR_MSGS_MESSAGE_RFIDSENSORMEASUREMENTMSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace stdr_msgs
{
template <class ContainerAllocator>
struct RfidSensorMeasurementMsg_
{
  typedef RfidSensorMeasurementMsg_<ContainerAllocator> Type;

  RfidSensorMeasurementMsg_()
    : header()
    , rfid_tags_ids()
    , rfid_tags_msgs()
    , rfid_tags_dbs()  {
    }
  RfidSensorMeasurementMsg_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , rfid_tags_ids(_alloc)
    , rfid_tags_msgs(_alloc)
    , rfid_tags_dbs(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _rfid_tags_ids_type;
  _rfid_tags_ids_type rfid_tags_ids;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _rfid_tags_msgs_type;
  _rfid_tags_msgs_type rfid_tags_msgs;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _rfid_tags_dbs_type;
  _rfid_tags_dbs_type rfid_tags_dbs;





  typedef boost::shared_ptr< ::stdr_msgs::RfidSensorMeasurementMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::stdr_msgs::RfidSensorMeasurementMsg_<ContainerAllocator> const> ConstPtr;

}; // struct RfidSensorMeasurementMsg_

typedef ::stdr_msgs::RfidSensorMeasurementMsg_<std::allocator<void> > RfidSensorMeasurementMsg;

typedef boost::shared_ptr< ::stdr_msgs::RfidSensorMeasurementMsg > RfidSensorMeasurementMsgPtr;
typedef boost::shared_ptr< ::stdr_msgs::RfidSensorMeasurementMsg const> RfidSensorMeasurementMsgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::stdr_msgs::RfidSensorMeasurementMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::stdr_msgs::RfidSensorMeasurementMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace stdr_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'stdr_msgs': ['/home/yadajin/stdr_ws/src/stdr_simulator/stdr_msgs/msg', '/home/yadajin/stdr_ws/devel/share/stdr_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::stdr_msgs::RfidSensorMeasurementMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::stdr_msgs::RfidSensorMeasurementMsg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::stdr_msgs::RfidSensorMeasurementMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::stdr_msgs::RfidSensorMeasurementMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stdr_msgs::RfidSensorMeasurementMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stdr_msgs::RfidSensorMeasurementMsg_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::stdr_msgs::RfidSensorMeasurementMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "274b41808759cfa6e05b69149e9ea1ed";
  }

  static const char* value(const ::stdr_msgs::RfidSensorMeasurementMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x274b41808759cfa6ULL;
  static const uint64_t static_value2 = 0xe05b69149e9ea1edULL;
};

template<class ContainerAllocator>
struct DataType< ::stdr_msgs::RfidSensorMeasurementMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "stdr_msgs/RfidSensorMeasurementMsg";
  }

  static const char* value(const ::stdr_msgs::RfidSensorMeasurementMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::stdr_msgs::RfidSensorMeasurementMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Rfid sensor measurement description - all vectors must have the same size\n\
Header header\n\
\n\
string[] rfid_tags_ids\n\
string[] rfid_tags_msgs\n\
float32[] rfid_tags_dbs\n\
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

  static const char* value(const ::stdr_msgs::RfidSensorMeasurementMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::stdr_msgs::RfidSensorMeasurementMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.rfid_tags_ids);
      stream.next(m.rfid_tags_msgs);
      stream.next(m.rfid_tags_dbs);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RfidSensorMeasurementMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::stdr_msgs::RfidSensorMeasurementMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::stdr_msgs::RfidSensorMeasurementMsg_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "rfid_tags_ids[]" << std::endl;
    for (size_t i = 0; i < v.rfid_tags_ids.size(); ++i)
    {
      s << indent << "  rfid_tags_ids[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.rfid_tags_ids[i]);
    }
    s << indent << "rfid_tags_msgs[]" << std::endl;
    for (size_t i = 0; i < v.rfid_tags_msgs.size(); ++i)
    {
      s << indent << "  rfid_tags_msgs[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.rfid_tags_msgs[i]);
    }
    s << indent << "rfid_tags_dbs[]" << std::endl;
    for (size_t i = 0; i < v.rfid_tags_dbs.size(); ++i)
    {
      s << indent << "  rfid_tags_dbs[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.rfid_tags_dbs[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // STDR_MSGS_MESSAGE_RFIDSENSORMEASUREMENTMSG_H

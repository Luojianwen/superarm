// Generated by gencpp from file interbotix_sdk/OperatingModesRequest.msg
// DO NOT EDIT!


#ifndef INTERBOTIX_SDK_MESSAGE_OPERATINGMODESREQUEST_H
#define INTERBOTIX_SDK_MESSAGE_OPERATINGMODESREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace interbotix_sdk
{
template <class ContainerAllocator>
struct OperatingModesRequest_
{
  typedef OperatingModesRequest_<ContainerAllocator> Type;

  OperatingModesRequest_()
    : cmd(0)
    , mode()
    , joint_name()
    , use_custom_profiles(false)
    , profile_velocity(0)
    , profile_acceleration(0)  {
    }
  OperatingModesRequest_(const ContainerAllocator& _alloc)
    : cmd(0)
    , mode(_alloc)
    , joint_name(_alloc)
    , use_custom_profiles(false)
    , profile_velocity(0)
    , profile_acceleration(0)  {
  (void)_alloc;
    }



   typedef int8_t _cmd_type;
  _cmd_type cmd;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _mode_type;
  _mode_type mode;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _joint_name_type;
  _joint_name_type joint_name;

   typedef uint8_t _use_custom_profiles_type;
  _use_custom_profiles_type use_custom_profiles;

   typedef int32_t _profile_velocity_type;
  _profile_velocity_type profile_velocity;

   typedef int32_t _profile_acceleration_type;
  _profile_acceleration_type profile_acceleration;



  enum {
    ARM_JOINTS_AND_GRIPPER = 1,
    ARM_JOINTS = 2,
    GRIPPER = 3,
    SINGLE_JOINT = 4,
  };


  typedef boost::shared_ptr< ::interbotix_sdk::OperatingModesRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::interbotix_sdk::OperatingModesRequest_<ContainerAllocator> const> ConstPtr;

}; // struct OperatingModesRequest_

typedef ::interbotix_sdk::OperatingModesRequest_<std::allocator<void> > OperatingModesRequest;

typedef boost::shared_ptr< ::interbotix_sdk::OperatingModesRequest > OperatingModesRequestPtr;
typedef boost::shared_ptr< ::interbotix_sdk::OperatingModesRequest const> OperatingModesRequestConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::interbotix_sdk::OperatingModesRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::interbotix_sdk::OperatingModesRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace interbotix_sdk

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'interbotix_sdk': ['/home/star/superarm_ws/src/interbotix_ros_arms/interbotix_sdk/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::interbotix_sdk::OperatingModesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::interbotix_sdk::OperatingModesRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::interbotix_sdk::OperatingModesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::interbotix_sdk::OperatingModesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::interbotix_sdk::OperatingModesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::interbotix_sdk::OperatingModesRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::interbotix_sdk::OperatingModesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "585951edcc6006e2034f68a456aad669";
  }

  static const char* value(const ::interbotix_sdk::OperatingModesRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x585951edcc6006e2ULL;
  static const uint64_t static_value2 = 0x034f68a456aad669ULL;
};

template<class ContainerAllocator>
struct DataType< ::interbotix_sdk::OperatingModesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "interbotix_sdk/OperatingModesRequest";
  }

  static const char* value(const ::interbotix_sdk::OperatingModesRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::interbotix_sdk::OperatingModesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
int8 ARM_JOINTS_AND_GRIPPER = 1\n\
int8 ARM_JOINTS = 2\n\
int8 GRIPPER = 3\n\
int8 SINGLE_JOINT = 4\n\
\n\
int8 cmd\n\
string mode\n\
string joint_name\n\
bool use_custom_profiles\n\
int32 profile_velocity\n\
int32 profile_acceleration\n\
";
  }

  static const char* value(const ::interbotix_sdk::OperatingModesRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::interbotix_sdk::OperatingModesRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cmd);
      stream.next(m.mode);
      stream.next(m.joint_name);
      stream.next(m.use_custom_profiles);
      stream.next(m.profile_velocity);
      stream.next(m.profile_acceleration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct OperatingModesRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::interbotix_sdk::OperatingModesRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::interbotix_sdk::OperatingModesRequest_<ContainerAllocator>& v)
  {
    s << indent << "cmd: ";
    Printer<int8_t>::stream(s, indent + "  ", v.cmd);
    s << indent << "mode: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.mode);
    s << indent << "joint_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.joint_name);
    s << indent << "use_custom_profiles: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.use_custom_profiles);
    s << indent << "profile_velocity: ";
    Printer<int32_t>::stream(s, indent + "  ", v.profile_velocity);
    s << indent << "profile_acceleration: ";
    Printer<int32_t>::stream(s, indent + "  ", v.profile_acceleration);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERBOTIX_SDK_MESSAGE_OPERATINGMODESREQUEST_H

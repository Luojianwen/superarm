// Generated by gencpp from file interbotix_sdk/RobotInfoResponse.msg
// DO NOT EDIT!


#ifndef INTERBOTIX_SDK_MESSAGE_ROBOTINFORESPONSE_H
#define INTERBOTIX_SDK_MESSAGE_ROBOTINFORESPONSE_H


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
struct RobotInfoResponse_
{
  typedef RobotInfoResponse_<ContainerAllocator> Type;

  RobotInfoResponse_()
    : joint_names()
    , joint_ids()
    , lower_joint_limits()
    , upper_joint_limits()
    , velocity_limits()
    , lower_gripper_limit(0.0)
    , upper_gripper_limit(0.0)
    , use_gripper(false)
    , home_pos()
    , sleep_pos()
    , num_joints(0)
    , num_single_joints(0)  {
    }
  RobotInfoResponse_(const ContainerAllocator& _alloc)
    : joint_names(_alloc)
    , joint_ids(_alloc)
    , lower_joint_limits(_alloc)
    , upper_joint_limits(_alloc)
    , velocity_limits(_alloc)
    , lower_gripper_limit(0.0)
    , upper_gripper_limit(0.0)
    , use_gripper(false)
    , home_pos(_alloc)
    , sleep_pos(_alloc)
    , num_joints(0)
    , num_single_joints(0)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _joint_names_type;
  _joint_names_type joint_names;

   typedef std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other >  _joint_ids_type;
  _joint_ids_type joint_ids;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _lower_joint_limits_type;
  _lower_joint_limits_type lower_joint_limits;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _upper_joint_limits_type;
  _upper_joint_limits_type upper_joint_limits;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _velocity_limits_type;
  _velocity_limits_type velocity_limits;

   typedef double _lower_gripper_limit_type;
  _lower_gripper_limit_type lower_gripper_limit;

   typedef double _upper_gripper_limit_type;
  _upper_gripper_limit_type upper_gripper_limit;

   typedef uint8_t _use_gripper_type;
  _use_gripper_type use_gripper;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _home_pos_type;
  _home_pos_type home_pos;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _sleep_pos_type;
  _sleep_pos_type sleep_pos;

   typedef int8_t _num_joints_type;
  _num_joints_type num_joints;

   typedef int8_t _num_single_joints_type;
  _num_single_joints_type num_single_joints;





  typedef boost::shared_ptr< ::interbotix_sdk::RobotInfoResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::interbotix_sdk::RobotInfoResponse_<ContainerAllocator> const> ConstPtr;

}; // struct RobotInfoResponse_

typedef ::interbotix_sdk::RobotInfoResponse_<std::allocator<void> > RobotInfoResponse;

typedef boost::shared_ptr< ::interbotix_sdk::RobotInfoResponse > RobotInfoResponsePtr;
typedef boost::shared_ptr< ::interbotix_sdk::RobotInfoResponse const> RobotInfoResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::interbotix_sdk::RobotInfoResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::interbotix_sdk::RobotInfoResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::interbotix_sdk::RobotInfoResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::interbotix_sdk::RobotInfoResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::interbotix_sdk::RobotInfoResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::interbotix_sdk::RobotInfoResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::interbotix_sdk::RobotInfoResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::interbotix_sdk::RobotInfoResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::interbotix_sdk::RobotInfoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8cbf67af7802be3e000262518104df12";
  }

  static const char* value(const ::interbotix_sdk::RobotInfoResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8cbf67af7802be3eULL;
  static const uint64_t static_value2 = 0x000262518104df12ULL;
};

template<class ContainerAllocator>
struct DataType< ::interbotix_sdk::RobotInfoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "interbotix_sdk/RobotInfoResponse";
  }

  static const char* value(const ::interbotix_sdk::RobotInfoResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::interbotix_sdk::RobotInfoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
string[] joint_names\n\
int16[] joint_ids\n\
float64[] lower_joint_limits\n\
float64[] upper_joint_limits\n\
float64[] velocity_limits\n\
float64 lower_gripper_limit\n\
float64 upper_gripper_limit\n\
bool use_gripper\n\
float64[] home_pos\n\
float64[] sleep_pos\n\
int8 num_joints\n\
int8 num_single_joints\n\
\n\
";
  }

  static const char* value(const ::interbotix_sdk::RobotInfoResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::interbotix_sdk::RobotInfoResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joint_names);
      stream.next(m.joint_ids);
      stream.next(m.lower_joint_limits);
      stream.next(m.upper_joint_limits);
      stream.next(m.velocity_limits);
      stream.next(m.lower_gripper_limit);
      stream.next(m.upper_gripper_limit);
      stream.next(m.use_gripper);
      stream.next(m.home_pos);
      stream.next(m.sleep_pos);
      stream.next(m.num_joints);
      stream.next(m.num_single_joints);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RobotInfoResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::interbotix_sdk::RobotInfoResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::interbotix_sdk::RobotInfoResponse_<ContainerAllocator>& v)
  {
    s << indent << "joint_names[]" << std::endl;
    for (size_t i = 0; i < v.joint_names.size(); ++i)
    {
      s << indent << "  joint_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.joint_names[i]);
    }
    s << indent << "joint_ids[]" << std::endl;
    for (size_t i = 0; i < v.joint_ids.size(); ++i)
    {
      s << indent << "  joint_ids[" << i << "]: ";
      Printer<int16_t>::stream(s, indent + "  ", v.joint_ids[i]);
    }
    s << indent << "lower_joint_limits[]" << std::endl;
    for (size_t i = 0; i < v.lower_joint_limits.size(); ++i)
    {
      s << indent << "  lower_joint_limits[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.lower_joint_limits[i]);
    }
    s << indent << "upper_joint_limits[]" << std::endl;
    for (size_t i = 0; i < v.upper_joint_limits.size(); ++i)
    {
      s << indent << "  upper_joint_limits[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.upper_joint_limits[i]);
    }
    s << indent << "velocity_limits[]" << std::endl;
    for (size_t i = 0; i < v.velocity_limits.size(); ++i)
    {
      s << indent << "  velocity_limits[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.velocity_limits[i]);
    }
    s << indent << "lower_gripper_limit: ";
    Printer<double>::stream(s, indent + "  ", v.lower_gripper_limit);
    s << indent << "upper_gripper_limit: ";
    Printer<double>::stream(s, indent + "  ", v.upper_gripper_limit);
    s << indent << "use_gripper: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.use_gripper);
    s << indent << "home_pos[]" << std::endl;
    for (size_t i = 0; i < v.home_pos.size(); ++i)
    {
      s << indent << "  home_pos[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.home_pos[i]);
    }
    s << indent << "sleep_pos[]" << std::endl;
    for (size_t i = 0; i < v.sleep_pos.size(); ++i)
    {
      s << indent << "  sleep_pos[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.sleep_pos[i]);
    }
    s << indent << "num_joints: ";
    Printer<int8_t>::stream(s, indent + "  ", v.num_joints);
    s << indent << "num_single_joints: ";
    Printer<int8_t>::stream(s, indent + "  ", v.num_single_joints);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERBOTIX_SDK_MESSAGE_ROBOTINFORESPONSE_H

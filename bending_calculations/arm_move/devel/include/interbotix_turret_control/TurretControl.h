// Generated by gencpp from file interbotix_turret_control/TurretControl.msg
// DO NOT EDIT!


#ifndef INTERBOTIX_TURRET_CONTROL_MESSAGE_TURRETCONTROL_H
#define INTERBOTIX_TURRET_CONTROL_MESSAGE_TURRETCONTROL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace interbotix_turret_control
{
template <class ContainerAllocator>
struct TurretControl_
{
  typedef TurretControl_<ContainerAllocator> Type;

  TurretControl_()
    : pan_cmd(0)
    , tilt_cmd(0)
    , arm_speed_cmd(0)
    , arm_toggle_speed_cmd(0)
    , robot_pose(0)  {
    }
  TurretControl_(const ContainerAllocator& _alloc)
    : pan_cmd(0)
    , tilt_cmd(0)
    , arm_speed_cmd(0)
    , arm_toggle_speed_cmd(0)
    , robot_pose(0)  {
  (void)_alloc;
    }



   typedef int8_t _pan_cmd_type;
  _pan_cmd_type pan_cmd;

   typedef int8_t _tilt_cmd_type;
  _tilt_cmd_type tilt_cmd;

   typedef int8_t _arm_speed_cmd_type;
  _arm_speed_cmd_type arm_speed_cmd;

   typedef int8_t _arm_toggle_speed_cmd_type;
  _arm_toggle_speed_cmd_type arm_toggle_speed_cmd;

   typedef int8_t _robot_pose_type;
  _robot_pose_type robot_pose;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(PAN_CCW)
  #undef PAN_CCW
#endif
#if defined(_WIN32) && defined(PAN_CW)
  #undef PAN_CW
#endif
#if defined(_WIN32) && defined(TILT_CCW)
  #undef TILT_CCW
#endif
#if defined(_WIN32) && defined(TILT_CW)
  #undef TILT_CW
#endif
#if defined(_WIN32) && defined(ARM_LOW_SPEED)
  #undef ARM_LOW_SPEED
#endif
#if defined(_WIN32) && defined(ARM_HIGH_SPEED)
  #undef ARM_HIGH_SPEED
#endif
#if defined(_WIN32) && defined(ARM_COURSE_SPEED)
  #undef ARM_COURSE_SPEED
#endif
#if defined(_WIN32) && defined(ARM_FINE_SPEED)
  #undef ARM_FINE_SPEED
#endif
#if defined(_WIN32) && defined(HOME_POSE)
  #undef HOME_POSE
#endif

  enum {
    PAN_CCW = 1,
    PAN_CW = 2,
    TILT_CCW = 3,
    TILT_CW = 4,
    ARM_LOW_SPEED = 5,
    ARM_HIGH_SPEED = 6,
    ARM_COURSE_SPEED = 7,
    ARM_FINE_SPEED = 8,
    HOME_POSE = 9,
  };


  typedef boost::shared_ptr< ::interbotix_turret_control::TurretControl_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::interbotix_turret_control::TurretControl_<ContainerAllocator> const> ConstPtr;

}; // struct TurretControl_

typedef ::interbotix_turret_control::TurretControl_<std::allocator<void> > TurretControl;

typedef boost::shared_ptr< ::interbotix_turret_control::TurretControl > TurretControlPtr;
typedef boost::shared_ptr< ::interbotix_turret_control::TurretControl const> TurretControlConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::interbotix_turret_control::TurretControl_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::interbotix_turret_control::TurretControl_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::interbotix_turret_control::TurretControl_<ContainerAllocator1> & lhs, const ::interbotix_turret_control::TurretControl_<ContainerAllocator2> & rhs)
{
  return lhs.pan_cmd == rhs.pan_cmd &&
    lhs.tilt_cmd == rhs.tilt_cmd &&
    lhs.arm_speed_cmd == rhs.arm_speed_cmd &&
    lhs.arm_toggle_speed_cmd == rhs.arm_toggle_speed_cmd &&
    lhs.robot_pose == rhs.robot_pose;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::interbotix_turret_control::TurretControl_<ContainerAllocator1> & lhs, const ::interbotix_turret_control::TurretControl_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace interbotix_turret_control

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::interbotix_turret_control::TurretControl_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::interbotix_turret_control::TurretControl_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::interbotix_turret_control::TurretControl_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::interbotix_turret_control::TurretControl_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::interbotix_turret_control::TurretControl_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::interbotix_turret_control::TurretControl_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::interbotix_turret_control::TurretControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3e39c9e14721edfb6fd43b3f34f67c7c";
  }

  static const char* value(const ::interbotix_turret_control::TurretControl_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3e39c9e14721edfbULL;
  static const uint64_t static_value2 = 0x6fd43b3f34f67c7cULL;
};

template<class ContainerAllocator>
struct DataType< ::interbotix_turret_control::TurretControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "interbotix_turret_control/TurretControl";
  }

  static const char* value(const ::interbotix_turret_control::TurretControl_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::interbotix_turret_control::TurretControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Send commands from the joy_node to the turret_control node\n"
"\n"
"# enum values that define the joystick controls for the robot\n"
"\n"
"# Control the motion of the pan joint\n"
"int8 PAN_CCW = 1\n"
"int8 PAN_CW = 2\n"
"\n"
"# Control the motion of the tilt joint\n"
"int8 TILT_CCW = 3\n"
"int8 TILT_CW = 4\n"
"\n"
"# Control the speed that the robot arm moves\n"
"int8 ARM_LOW_SPEED = 5\n"
"int8 ARM_HIGH_SPEED = 6\n"
"\n"
"# Quickly toggle between a fast and slow speed setting\n"
"int8 ARM_COURSE_SPEED = 7\n"
"int8 ARM_FINE_SPEED = 8\n"
"\n"
"# Set robot to specific pose\n"
"int8 HOME_POSE = 9\n"
"\n"
"int8 pan_cmd\n"
"int8 tilt_cmd\n"
"int8 arm_speed_cmd\n"
"int8 arm_toggle_speed_cmd\n"
"int8 robot_pose\n"
;
  }

  static const char* value(const ::interbotix_turret_control::TurretControl_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::interbotix_turret_control::TurretControl_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pan_cmd);
      stream.next(m.tilt_cmd);
      stream.next(m.arm_speed_cmd);
      stream.next(m.arm_toggle_speed_cmd);
      stream.next(m.robot_pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TurretControl_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::interbotix_turret_control::TurretControl_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::interbotix_turret_control::TurretControl_<ContainerAllocator>& v)
  {
    s << indent << "pan_cmd: ";
    Printer<int8_t>::stream(s, indent + "  ", v.pan_cmd);
    s << indent << "tilt_cmd: ";
    Printer<int8_t>::stream(s, indent + "  ", v.tilt_cmd);
    s << indent << "arm_speed_cmd: ";
    Printer<int8_t>::stream(s, indent + "  ", v.arm_speed_cmd);
    s << indent << "arm_toggle_speed_cmd: ";
    Printer<int8_t>::stream(s, indent + "  ", v.arm_toggle_speed_cmd);
    s << indent << "robot_pose: ";
    Printer<int8_t>::stream(s, indent + "  ", v.robot_pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERBOTIX_TURRET_CONTROL_MESSAGE_TURRETCONTROL_H
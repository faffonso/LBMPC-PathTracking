// Generated by gencpp from file terrasentia_sensors/Motor.msg
// DO NOT EDIT!


#ifndef TERRASENTIA_SENSORS_MESSAGE_MOTOR_H
#define TERRASENTIA_SENSORS_MESSAGE_MOTOR_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace terrasentia_sensors
{
template <class ContainerAllocator>
struct Motor_
{
  typedef Motor_<ContainerAllocator> Type;

  Motor_()
    : status(false)
    , current(0.0)
    , linear_speed(0.0)  {
    }
  Motor_(const ContainerAllocator& _alloc)
    : status(false)
    , current(0.0)
    , linear_speed(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _status_type;
  _status_type status;

   typedef float _current_type;
  _current_type current;

   typedef float _linear_speed_type;
  _linear_speed_type linear_speed;





  typedef boost::shared_ptr< ::terrasentia_sensors::Motor_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::terrasentia_sensors::Motor_<ContainerAllocator> const> ConstPtr;

}; // struct Motor_

typedef ::terrasentia_sensors::Motor_<std::allocator<void> > Motor;

typedef boost::shared_ptr< ::terrasentia_sensors::Motor > MotorPtr;
typedef boost::shared_ptr< ::terrasentia_sensors::Motor const> MotorConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::terrasentia_sensors::Motor_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::terrasentia_sensors::Motor_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::terrasentia_sensors::Motor_<ContainerAllocator1> & lhs, const ::terrasentia_sensors::Motor_<ContainerAllocator2> & rhs)
{
  return lhs.status == rhs.status &&
    lhs.current == rhs.current &&
    lhs.linear_speed == rhs.linear_speed;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::terrasentia_sensors::Motor_<ContainerAllocator1> & lhs, const ::terrasentia_sensors::Motor_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace terrasentia_sensors

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::terrasentia_sensors::Motor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::terrasentia_sensors::Motor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::terrasentia_sensors::Motor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::terrasentia_sensors::Motor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::terrasentia_sensors::Motor_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::terrasentia_sensors::Motor_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::terrasentia_sensors::Motor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ddcdf3f155fb96dd57ae968eded5ace9";
  }

  static const char* value(const ::terrasentia_sensors::Motor_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xddcdf3f155fb96ddULL;
  static const uint64_t static_value2 = 0x57ae968eded5ace9ULL;
};

template<class ContainerAllocator>
struct DataType< ::terrasentia_sensors::Motor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "terrasentia_sensors/Motor";
  }

  static const char* value(const ::terrasentia_sensors::Motor_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::terrasentia_sensors::Motor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool status\n"
"float32 current\n"
"float32 linear_speed\n"
;
  }

  static const char* value(const ::terrasentia_sensors::Motor_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::terrasentia_sensors::Motor_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
      stream.next(m.current);
      stream.next(m.linear_speed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Motor_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::terrasentia_sensors::Motor_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::terrasentia_sensors::Motor_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
    s << indent << "current: ";
    Printer<float>::stream(s, indent + "  ", v.current);
    s << indent << "linear_speed: ";
    Printer<float>::stream(s, indent + "  ", v.linear_speed);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TERRASENTIA_SENSORS_MESSAGE_MOTOR_H

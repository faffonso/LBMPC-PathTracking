// Generated by gencpp from file terrasentia_sensors/Euler_Base.msg
// DO NOT EDIT!


#ifndef TERRASENTIA_SENSORS_MESSAGE_EULER_BASE_H
#define TERRASENTIA_SENSORS_MESSAGE_EULER_BASE_H


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
struct Euler_Base_
{
  typedef Euler_Base_<ContainerAllocator> Type;

  Euler_Base_()
    : roll(0.0)
    , pitch(0.0)
    , yaw(0.0)  {
    }
  Euler_Base_(const ContainerAllocator& _alloc)
    : roll(0.0)
    , pitch(0.0)
    , yaw(0.0)  {
  (void)_alloc;
    }



   typedef double _roll_type;
  _roll_type roll;

   typedef double _pitch_type;
  _pitch_type pitch;

   typedef double _yaw_type;
  _yaw_type yaw;





  typedef boost::shared_ptr< ::terrasentia_sensors::Euler_Base_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::terrasentia_sensors::Euler_Base_<ContainerAllocator> const> ConstPtr;

}; // struct Euler_Base_

typedef ::terrasentia_sensors::Euler_Base_<std::allocator<void> > Euler_Base;

typedef boost::shared_ptr< ::terrasentia_sensors::Euler_Base > Euler_BasePtr;
typedef boost::shared_ptr< ::terrasentia_sensors::Euler_Base const> Euler_BaseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::terrasentia_sensors::Euler_Base_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::terrasentia_sensors::Euler_Base_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::terrasentia_sensors::Euler_Base_<ContainerAllocator1> & lhs, const ::terrasentia_sensors::Euler_Base_<ContainerAllocator2> & rhs)
{
  return lhs.roll == rhs.roll &&
    lhs.pitch == rhs.pitch &&
    lhs.yaw == rhs.yaw;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::terrasentia_sensors::Euler_Base_<ContainerAllocator1> & lhs, const ::terrasentia_sensors::Euler_Base_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace terrasentia_sensors

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::terrasentia_sensors::Euler_Base_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::terrasentia_sensors::Euler_Base_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::terrasentia_sensors::Euler_Base_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::terrasentia_sensors::Euler_Base_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::terrasentia_sensors::Euler_Base_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::terrasentia_sensors::Euler_Base_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::terrasentia_sensors::Euler_Base_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eeec8b25a660789a89540dedcb2b06d6";
  }

  static const char* value(const ::terrasentia_sensors::Euler_Base_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeeec8b25a660789aULL;
  static const uint64_t static_value2 = 0x89540dedcb2b06d6ULL;
};

template<class ContainerAllocator>
struct DataType< ::terrasentia_sensors::Euler_Base_<ContainerAllocator> >
{
  static const char* value()
  {
    return "terrasentia_sensors/Euler_Base";
  }

  static const char* value(const ::terrasentia_sensors::Euler_Base_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::terrasentia_sensors::Euler_Base_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 roll\n"
"float64 pitch\n"
"float64 yaw\n"
;
  }

  static const char* value(const ::terrasentia_sensors::Euler_Base_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::terrasentia_sensors::Euler_Base_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.roll);
      stream.next(m.pitch);
      stream.next(m.yaw);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Euler_Base_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::terrasentia_sensors::Euler_Base_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::terrasentia_sensors::Euler_Base_<ContainerAllocator>& v)
  {
    s << indent << "roll: ";
    Printer<double>::stream(s, indent + "  ", v.roll);
    s << indent << "pitch: ";
    Printer<double>::stream(s, indent + "  ", v.pitch);
    s << indent << "yaw: ";
    Printer<double>::stream(s, indent + "  ", v.yaw);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TERRASENTIA_SENSORS_MESSAGE_EULER_BASE_H

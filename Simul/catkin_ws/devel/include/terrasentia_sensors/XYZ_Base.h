// Generated by gencpp from file terrasentia_sensors/XYZ_Base.msg
// DO NOT EDIT!


#ifndef TERRASENTIA_SENSORS_MESSAGE_XYZ_BASE_H
#define TERRASENTIA_SENSORS_MESSAGE_XYZ_BASE_H


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
struct XYZ_Base_
{
  typedef XYZ_Base_<ContainerAllocator> Type;

  XYZ_Base_()
    : x(0.0)
    , y(0.0)
    , z(0.0)  {
    }
  XYZ_Base_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , z(0.0)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _z_type;
  _z_type z;





  typedef boost::shared_ptr< ::terrasentia_sensors::XYZ_Base_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::terrasentia_sensors::XYZ_Base_<ContainerAllocator> const> ConstPtr;

}; // struct XYZ_Base_

typedef ::terrasentia_sensors::XYZ_Base_<std::allocator<void> > XYZ_Base;

typedef boost::shared_ptr< ::terrasentia_sensors::XYZ_Base > XYZ_BasePtr;
typedef boost::shared_ptr< ::terrasentia_sensors::XYZ_Base const> XYZ_BaseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::terrasentia_sensors::XYZ_Base_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::terrasentia_sensors::XYZ_Base_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::terrasentia_sensors::XYZ_Base_<ContainerAllocator1> & lhs, const ::terrasentia_sensors::XYZ_Base_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.z == rhs.z;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::terrasentia_sensors::XYZ_Base_<ContainerAllocator1> & lhs, const ::terrasentia_sensors::XYZ_Base_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace terrasentia_sensors

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::terrasentia_sensors::XYZ_Base_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::terrasentia_sensors::XYZ_Base_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::terrasentia_sensors::XYZ_Base_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::terrasentia_sensors::XYZ_Base_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::terrasentia_sensors::XYZ_Base_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::terrasentia_sensors::XYZ_Base_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::terrasentia_sensors::XYZ_Base_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4a842b65f413084dc2b10fb484ea7f17";
  }

  static const char* value(const ::terrasentia_sensors::XYZ_Base_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4a842b65f413084dULL;
  static const uint64_t static_value2 = 0xc2b10fb484ea7f17ULL;
};

template<class ContainerAllocator>
struct DataType< ::terrasentia_sensors::XYZ_Base_<ContainerAllocator> >
{
  static const char* value()
  {
    return "terrasentia_sensors/XYZ_Base";
  }

  static const char* value(const ::terrasentia_sensors::XYZ_Base_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::terrasentia_sensors::XYZ_Base_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::terrasentia_sensors::XYZ_Base_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::terrasentia_sensors::XYZ_Base_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct XYZ_Base_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::terrasentia_sensors::XYZ_Base_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::terrasentia_sensors::XYZ_Base_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TERRASENTIA_SENSORS_MESSAGE_XYZ_BASE_H

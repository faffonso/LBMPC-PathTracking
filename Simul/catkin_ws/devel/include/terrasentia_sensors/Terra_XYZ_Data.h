// Generated by gencpp from file terrasentia_sensors/Terra_XYZ_Data.msg
// DO NOT EDIT!


#ifndef TERRASENTIA_SENSORS_MESSAGE_TERRA_XYZ_DATA_H
#define TERRASENTIA_SENSORS_MESSAGE_TERRA_XYZ_DATA_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <terrasentia_sensors/XYZ_Base.h>
#include <terrasentia_sensors/XYZ_Base.h>
#include <terrasentia_sensors/XYZ_Base.h>

namespace terrasentia_sensors
{
template <class ContainerAllocator>
struct Terra_XYZ_Data_
{
  typedef Terra_XYZ_Data_<ContainerAllocator> Type;

  Terra_XYZ_Data_()
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , covariance()
    , bias()
    , offset()  {
    }
  Terra_XYZ_Data_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , covariance(_alloc)
    , bias(_alloc)
    , offset(_alloc)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _z_type;
  _z_type z;

   typedef  ::terrasentia_sensors::XYZ_Base_<ContainerAllocator>  _covariance_type;
  _covariance_type covariance;

   typedef  ::terrasentia_sensors::XYZ_Base_<ContainerAllocator>  _bias_type;
  _bias_type bias;

   typedef  ::terrasentia_sensors::XYZ_Base_<ContainerAllocator>  _offset_type;
  _offset_type offset;





  typedef boost::shared_ptr< ::terrasentia_sensors::Terra_XYZ_Data_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::terrasentia_sensors::Terra_XYZ_Data_<ContainerAllocator> const> ConstPtr;

}; // struct Terra_XYZ_Data_

typedef ::terrasentia_sensors::Terra_XYZ_Data_<std::allocator<void> > Terra_XYZ_Data;

typedef boost::shared_ptr< ::terrasentia_sensors::Terra_XYZ_Data > Terra_XYZ_DataPtr;
typedef boost::shared_ptr< ::terrasentia_sensors::Terra_XYZ_Data const> Terra_XYZ_DataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::terrasentia_sensors::Terra_XYZ_Data_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::terrasentia_sensors::Terra_XYZ_Data_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::terrasentia_sensors::Terra_XYZ_Data_<ContainerAllocator1> & lhs, const ::terrasentia_sensors::Terra_XYZ_Data_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.z == rhs.z &&
    lhs.covariance == rhs.covariance &&
    lhs.bias == rhs.bias &&
    lhs.offset == rhs.offset;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::terrasentia_sensors::Terra_XYZ_Data_<ContainerAllocator1> & lhs, const ::terrasentia_sensors::Terra_XYZ_Data_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace terrasentia_sensors

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::terrasentia_sensors::Terra_XYZ_Data_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::terrasentia_sensors::Terra_XYZ_Data_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::terrasentia_sensors::Terra_XYZ_Data_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::terrasentia_sensors::Terra_XYZ_Data_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::terrasentia_sensors::Terra_XYZ_Data_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::terrasentia_sensors::Terra_XYZ_Data_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::terrasentia_sensors::Terra_XYZ_Data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "513fdfd0e6bee20a157cc975187a992e";
  }

  static const char* value(const ::terrasentia_sensors::Terra_XYZ_Data_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x513fdfd0e6bee20aULL;
  static const uint64_t static_value2 = 0x157cc975187a992eULL;
};

template<class ContainerAllocator>
struct DataType< ::terrasentia_sensors::Terra_XYZ_Data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "terrasentia_sensors/Terra_XYZ_Data";
  }

  static const char* value(const ::terrasentia_sensors::Terra_XYZ_Data_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::terrasentia_sensors::Terra_XYZ_Data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 x\n"
"float64 y\n"
"float64 z\n"
"XYZ_Base covariance\n"
"XYZ_Base bias\n"
"XYZ_Base offset\n"
"\n"
"================================================================================\n"
"MSG: terrasentia_sensors/XYZ_Base\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::terrasentia_sensors::Terra_XYZ_Data_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::terrasentia_sensors::Terra_XYZ_Data_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.covariance);
      stream.next(m.bias);
      stream.next(m.offset);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Terra_XYZ_Data_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::terrasentia_sensors::Terra_XYZ_Data_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::terrasentia_sensors::Terra_XYZ_Data_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
    s << indent << "covariance: ";
    s << std::endl;
    Printer< ::terrasentia_sensors::XYZ_Base_<ContainerAllocator> >::stream(s, indent + "  ", v.covariance);
    s << indent << "bias: ";
    s << std::endl;
    Printer< ::terrasentia_sensors::XYZ_Base_<ContainerAllocator> >::stream(s, indent + "  ", v.bias);
    s << indent << "offset: ";
    s << std::endl;
    Printer< ::terrasentia_sensors::XYZ_Base_<ContainerAllocator> >::stream(s, indent + "  ", v.offset);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TERRASENTIA_SENSORS_MESSAGE_TERRA_XYZ_DATA_H

// Generated by gencpp from file roborts_msgs/Relocate.msg
// DO NOT EDIT!


#ifndef ROBORTS_MSGS_MESSAGE_RELOCATE_H
#define ROBORTS_MSGS_MESSAGE_RELOCATE_H

#include <ros/service_traits.h>


#include <roborts_msgs/RelocateRequest.h>
#include <roborts_msgs/RelocateResponse.h>


namespace roborts_msgs
{

struct Relocate
{

typedef RelocateRequest Request;
typedef RelocateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Relocate
} // namespace roborts_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::roborts_msgs::Relocate > {
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::roborts_msgs::Relocate&) { return value(); }
};

template<>
struct DataType< ::roborts_msgs::Relocate > {
  static const char* value()
  {
    return "roborts_msgs/Relocate";
  }

  static const char* value(const ::roborts_msgs::Relocate&) { return value(); }
};


// service_traits::MD5Sum< ::roborts_msgs::RelocateRequest> should match
// service_traits::MD5Sum< ::roborts_msgs::Relocate >
template<>
struct MD5Sum< ::roborts_msgs::RelocateRequest>
{
  static const char* value()
  {
    return MD5Sum< ::roborts_msgs::Relocate >::value();
  }
  static const char* value(const ::roborts_msgs::RelocateRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::roborts_msgs::RelocateRequest> should match
// service_traits::DataType< ::roborts_msgs::Relocate >
template<>
struct DataType< ::roborts_msgs::RelocateRequest>
{
  static const char* value()
  {
    return DataType< ::roborts_msgs::Relocate >::value();
  }
  static const char* value(const ::roborts_msgs::RelocateRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::roborts_msgs::RelocateResponse> should match
// service_traits::MD5Sum< ::roborts_msgs::Relocate >
template<>
struct MD5Sum< ::roborts_msgs::RelocateResponse>
{
  static const char* value()
  {
    return MD5Sum< ::roborts_msgs::Relocate >::value();
  }
  static const char* value(const ::roborts_msgs::RelocateResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::roborts_msgs::RelocateResponse> should match
// service_traits::DataType< ::roborts_msgs::Relocate >
template<>
struct DataType< ::roborts_msgs::RelocateResponse>
{
  static const char* value()
  {
    return DataType< ::roborts_msgs::Relocate >::value();
  }
  static const char* value(const ::roborts_msgs::RelocateResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBORTS_MSGS_MESSAGE_RELOCATE_H

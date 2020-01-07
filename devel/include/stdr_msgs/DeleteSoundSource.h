// Generated by gencpp from file stdr_msgs/DeleteSoundSource.msg
// DO NOT EDIT!


#ifndef STDR_MSGS_MESSAGE_DELETESOUNDSOURCE_H
#define STDR_MSGS_MESSAGE_DELETESOUNDSOURCE_H

#include <ros/service_traits.h>


#include <stdr_msgs/DeleteSoundSourceRequest.h>
#include <stdr_msgs/DeleteSoundSourceResponse.h>


namespace stdr_msgs
{

struct DeleteSoundSource
{

typedef DeleteSoundSourceRequest Request;
typedef DeleteSoundSourceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct DeleteSoundSource
} // namespace stdr_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::stdr_msgs::DeleteSoundSource > {
  static const char* value()
  {
    return "c1f3d28f1b044c871e6eff2e9fc3c667";
  }

  static const char* value(const ::stdr_msgs::DeleteSoundSource&) { return value(); }
};

template<>
struct DataType< ::stdr_msgs::DeleteSoundSource > {
  static const char* value()
  {
    return "stdr_msgs/DeleteSoundSource";
  }

  static const char* value(const ::stdr_msgs::DeleteSoundSource&) { return value(); }
};


// service_traits::MD5Sum< ::stdr_msgs::DeleteSoundSourceRequest> should match 
// service_traits::MD5Sum< ::stdr_msgs::DeleteSoundSource > 
template<>
struct MD5Sum< ::stdr_msgs::DeleteSoundSourceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::stdr_msgs::DeleteSoundSource >::value();
  }
  static const char* value(const ::stdr_msgs::DeleteSoundSourceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::stdr_msgs::DeleteSoundSourceRequest> should match 
// service_traits::DataType< ::stdr_msgs::DeleteSoundSource > 
template<>
struct DataType< ::stdr_msgs::DeleteSoundSourceRequest>
{
  static const char* value()
  {
    return DataType< ::stdr_msgs::DeleteSoundSource >::value();
  }
  static const char* value(const ::stdr_msgs::DeleteSoundSourceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::stdr_msgs::DeleteSoundSourceResponse> should match 
// service_traits::MD5Sum< ::stdr_msgs::DeleteSoundSource > 
template<>
struct MD5Sum< ::stdr_msgs::DeleteSoundSourceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::stdr_msgs::DeleteSoundSource >::value();
  }
  static const char* value(const ::stdr_msgs::DeleteSoundSourceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::stdr_msgs::DeleteSoundSourceResponse> should match 
// service_traits::DataType< ::stdr_msgs::DeleteSoundSource > 
template<>
struct DataType< ::stdr_msgs::DeleteSoundSourceResponse>
{
  static const char* value()
  {
    return DataType< ::stdr_msgs::DeleteSoundSource >::value();
  }
  static const char* value(const ::stdr_msgs::DeleteSoundSourceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // STDR_MSGS_MESSAGE_DELETESOUNDSOURCE_H

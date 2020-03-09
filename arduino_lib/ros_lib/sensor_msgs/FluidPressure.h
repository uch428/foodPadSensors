#ifndef _ROS_sensor_msgs_FluidPressure_h
#define _ROS_sensor_msgs_FluidPressure_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace sensor_msgs
{

  class FluidPressure : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef double _fluid_pressure_type;
      _fluid_pressure_type fluid_pressure;
      typedef double _fluid_pressure0_type;
      _fluid_pressure0_type fluid_pressure0;
      typedef double _fluid_pressure1_type;
      _fluid_pressure1_type fluid_pressure1;
      typedef double _fluid_pressure2_type;
      _fluid_pressure2_type fluid_pressure2;
      typedef double _fluid_pressure3_type;
      _fluid_pressure3_type fluid_pressure3;
      typedef double _fluid_pressure4_type;
      _fluid_pressure4_type fluid_pressure4;
      typedef double _fluid_pressure5_type;
      _fluid_pressure5_type fluid_pressure5;
      typedef double _fluid_pressure6_type;
      _fluid_pressure6_type fluid_pressure6;
      typedef double _fluid_pressure7_type;
      _fluid_pressure7_type fluid_pressure7;
      typedef double _variance_type;
      _variance_type variance;

    FluidPressure():
      header(),
      fluid_pressure(0),
      fluid_pressure0(0),
      fluid_pressure1(0),
      fluid_pressure2(0),
      fluid_pressure3(0),
      fluid_pressure4(0),
      fluid_pressure5(0),
      fluid_pressure6(0),
      fluid_pressure7(0),
      variance(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_fluid_pressure;
      u_fluid_pressure.real = this->fluid_pressure;
      *(outbuffer + offset + 0) = (u_fluid_pressure.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_fluid_pressure.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_fluid_pressure.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_fluid_pressure.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_fluid_pressure.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_fluid_pressure.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_fluid_pressure.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_fluid_pressure.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->fluid_pressure);
      union {
        double real;
        uint64_t base;
      } u_fluid_pressure0;
      u_fluid_pressure0.real = this->fluid_pressure0;
      *(outbuffer + offset + 0) = (u_fluid_pressure0.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_fluid_pressure0.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_fluid_pressure0.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_fluid_pressure0.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_fluid_pressure0.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_fluid_pressure0.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_fluid_pressure0.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_fluid_pressure0.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->fluid_pressure0);
      union {
        double real;
        uint64_t base;
      } u_fluid_pressure1;
      u_fluid_pressure1.real = this->fluid_pressure1;
      *(outbuffer + offset + 0) = (u_fluid_pressure1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_fluid_pressure1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_fluid_pressure1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_fluid_pressure1.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_fluid_pressure1.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_fluid_pressure1.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_fluid_pressure1.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_fluid_pressure1.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->fluid_pressure1);
      union {
        double real;
        uint64_t base;
      } u_fluid_pressure2;
      u_fluid_pressure2.real = this->fluid_pressure2;
      *(outbuffer + offset + 0) = (u_fluid_pressure2.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_fluid_pressure2.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_fluid_pressure2.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_fluid_pressure2.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_fluid_pressure2.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_fluid_pressure2.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_fluid_pressure2.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_fluid_pressure2.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->fluid_pressure2);
      union {
        double real;
        uint64_t base;
      } u_fluid_pressure3;
      u_fluid_pressure3.real = this->fluid_pressure3;
      *(outbuffer + offset + 0) = (u_fluid_pressure3.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_fluid_pressure3.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_fluid_pressure3.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_fluid_pressure3.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_fluid_pressure3.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_fluid_pressure3.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_fluid_pressure3.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_fluid_pressure3.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->fluid_pressure3);
      union {
        double real;
        uint64_t base;
      } u_fluid_pressure4;
      u_fluid_pressure4.real = this->fluid_pressure4;
      *(outbuffer + offset + 0) = (u_fluid_pressure4.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_fluid_pressure4.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_fluid_pressure4.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_fluid_pressure4.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_fluid_pressure4.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_fluid_pressure4.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_fluid_pressure4.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_fluid_pressure4.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->fluid_pressure4);
      union {
        double real;
        uint64_t base;
      } u_fluid_pressure5;
      u_fluid_pressure5.real = this->fluid_pressure5;
      *(outbuffer + offset + 0) = (u_fluid_pressure5.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_fluid_pressure5.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_fluid_pressure5.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_fluid_pressure5.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_fluid_pressure5.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_fluid_pressure5.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_fluid_pressure5.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_fluid_pressure5.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->fluid_pressure5);
      union {
        double real;
        uint64_t base;
      } u_fluid_pressure6;
      u_fluid_pressure6.real = this->fluid_pressure6;
      *(outbuffer + offset + 0) = (u_fluid_pressure6.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_fluid_pressure6.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_fluid_pressure6.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_fluid_pressure6.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_fluid_pressure6.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_fluid_pressure6.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_fluid_pressure6.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_fluid_pressure6.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->fluid_pressure6);
      union {
        double real;
        uint64_t base;
      } u_fluid_pressure7;
      u_fluid_pressure7.real = this->fluid_pressure7;
      *(outbuffer + offset + 0) = (u_fluid_pressure7.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_fluid_pressure7.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_fluid_pressure7.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_fluid_pressure7.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_fluid_pressure7.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_fluid_pressure7.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_fluid_pressure7.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_fluid_pressure7.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->fluid_pressure7);
      union {
        double real;
        uint64_t base;
      } u_variance;
      u_variance.real = this->variance;
      *(outbuffer + offset + 0) = (u_variance.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_variance.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_variance.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_variance.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_variance.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_variance.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_variance.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_variance.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->variance);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_fluid_pressure;
      u_fluid_pressure.base = 0;
      u_fluid_pressure.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_fluid_pressure.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_fluid_pressure.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_fluid_pressure.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_fluid_pressure.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_fluid_pressure.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_fluid_pressure.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_fluid_pressure.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->fluid_pressure = u_fluid_pressure.real;
      offset += sizeof(this->fluid_pressure);
      union {
        double real;
        uint64_t base;
      } u_fluid_pressure0;
      u_fluid_pressure0.base = 0;
      u_fluid_pressure0.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_fluid_pressure0.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_fluid_pressure0.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_fluid_pressure0.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_fluid_pressure0.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_fluid_pressure0.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_fluid_pressure0.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_fluid_pressure0.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->fluid_pressure0 = u_fluid_pressure0.real;
      offset += sizeof(this->fluid_pressure0);
      union {
        double real;
        uint64_t base;
      } u_fluid_pressure1;
      u_fluid_pressure1.base = 0;
      u_fluid_pressure1.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_fluid_pressure1.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_fluid_pressure1.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_fluid_pressure1.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_fluid_pressure1.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_fluid_pressure1.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_fluid_pressure1.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_fluid_pressure1.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->fluid_pressure1 = u_fluid_pressure1.real;
      offset += sizeof(this->fluid_pressure1);
      union {
        double real;
        uint64_t base;
      } u_fluid_pressure2;
      u_fluid_pressure2.base = 0;
      u_fluid_pressure2.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_fluid_pressure2.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_fluid_pressure2.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_fluid_pressure2.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_fluid_pressure2.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_fluid_pressure2.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_fluid_pressure2.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_fluid_pressure2.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->fluid_pressure2 = u_fluid_pressure2.real;
      offset += sizeof(this->fluid_pressure2);
      union {
        double real;
        uint64_t base;
      } u_fluid_pressure3;
      u_fluid_pressure3.base = 0;
      u_fluid_pressure3.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_fluid_pressure3.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_fluid_pressure3.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_fluid_pressure3.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_fluid_pressure3.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_fluid_pressure3.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_fluid_pressure3.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_fluid_pressure3.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->fluid_pressure3 = u_fluid_pressure3.real;
      offset += sizeof(this->fluid_pressure3);
      union {
        double real;
        uint64_t base;
      } u_fluid_pressure4;
      u_fluid_pressure4.base = 0;
      u_fluid_pressure4.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_fluid_pressure4.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_fluid_pressure4.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_fluid_pressure4.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_fluid_pressure4.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_fluid_pressure4.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_fluid_pressure4.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_fluid_pressure4.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->fluid_pressure4 = u_fluid_pressure4.real;
      offset += sizeof(this->fluid_pressure4);
      union {
        double real;
        uint64_t base;
      } u_fluid_pressure5;
      u_fluid_pressure5.base = 0;
      u_fluid_pressure5.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_fluid_pressure5.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_fluid_pressure5.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_fluid_pressure5.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_fluid_pressure5.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_fluid_pressure5.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_fluid_pressure5.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_fluid_pressure5.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->fluid_pressure5 = u_fluid_pressure5.real;
      offset += sizeof(this->fluid_pressure5);
      union {
        double real;
        uint64_t base;
      } u_fluid_pressure6;
      u_fluid_pressure6.base = 0;
      u_fluid_pressure6.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_fluid_pressure6.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_fluid_pressure6.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_fluid_pressure6.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_fluid_pressure6.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_fluid_pressure6.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_fluid_pressure6.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_fluid_pressure6.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->fluid_pressure6 = u_fluid_pressure6.real;
      offset += sizeof(this->fluid_pressure6);
      union {
        double real;
        uint64_t base;
      } u_fluid_pressure7;
      u_fluid_pressure7.base = 0;
      u_fluid_pressure7.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_fluid_pressure7.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_fluid_pressure7.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_fluid_pressure7.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_fluid_pressure7.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_fluid_pressure7.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_fluid_pressure7.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_fluid_pressure7.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->fluid_pressure7 = u_fluid_pressure7.real;
      offset += sizeof(this->fluid_pressure7);
      union {
        double real;
        uint64_t base;
      } u_variance;
      u_variance.base = 0;
      u_variance.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_variance.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_variance.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_variance.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_variance.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_variance.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_variance.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_variance.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->variance = u_variance.real;
      offset += sizeof(this->variance);
     return offset;
    }

    const char * getType(){ return "sensor_msgs/FluidPressure"; };
    const char * getMD5(){ return "804dc5cea1c5306d6a2eb80b9833befe"; };

  };

}
#endif

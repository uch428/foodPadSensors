#ifndef _ROS_rosserial_arduino_Adc_h
#define _ROS_rosserial_arduino_Adc_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace rosserial_arduino
{

  class Adc : public ros::Msg
  {
    public:
      typedef uint16_t _adc0_type;
      _adc0_type adc0;
      typedef uint16_t _adc1_type;
      _adc1_type adc1;
      typedef uint16_t _adc2_type;
      _adc2_type adc2;
      typedef uint16_t _adc3_type;
      _adc3_type adc3;
      typedef uint16_t _adc4_type;
      _adc4_type adc4;
      typedef uint16_t _adc5_type;
      _adc5_type adc5;

      typedef uint16_t _adc6_type;
      _adc5_type adc6;
      typedef uint16_t _adc7_type;
      _adc5_type adc7;


    Adc():
      adc0(0),
      adc1(0),
      adc2(0),
      adc3(0),
      adc4(0),
      adc5(0),
      adc6(0),
      adc7(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->adc0 >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->adc0 >> (8 * 1)) & 0xFF;
      offset += sizeof(this->adc0);

      *(outbuffer + offset + 0) = (this->adc1 >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->adc1 >> (8 * 1)) & 0xFF;
      offset += sizeof(this->adc1);

      *(outbuffer + offset + 0) = (this->adc2 >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->adc2 >> (8 * 1)) & 0xFF;
      offset += sizeof(this->adc2);
      *(outbuffer + offset + 0) = (this->adc3 >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->adc3 >> (8 * 1)) & 0xFF;
      offset += sizeof(this->adc3);
      *(outbuffer + offset + 0) = (this->adc4 >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->adc4 >> (8 * 1)) & 0xFF;
      offset += sizeof(this->adc4);
      *(outbuffer + offset + 0) = (this->adc5 >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->adc5 >> (8 * 1)) & 0xFF;
      offset += sizeof(this->adc5);

      *(outbuffer + offset + 0) = (this->adc6 >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->adc6 >> (8 * 1)) & 0xFF;
      offset += sizeof(this->adc6);
      *(outbuffer + offset + 0) = (this->adc7 >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->adc7 >> (8 * 1)) & 0xFF;
      offset += sizeof(this->adc7);

      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      this->adc0 =  ((uint16_t) (*(inbuffer + offset)));
      this->adc0 |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->adc0);
      this->adc1 =  ((uint16_t) (*(inbuffer + offset)));
      this->adc1 |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->adc1);
      this->adc2 =  ((uint16_t) (*(inbuffer + offset)));
      this->adc2 |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->adc2);
      this->adc3 =  ((uint16_t) (*(inbuffer + offset)));
      this->adc3 |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->adc3);
      this->adc4 =  ((uint16_t) (*(inbuffer + offset)));
      this->adc4 |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->adc4);
      this->adc5 =  ((uint16_t) (*(inbuffer + offset)));
      this->adc5 |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->adc5);

      this->adc6 =  ((uint16_t) (*(inbuffer + offset)));
      this->adc6 |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->adc6);
      this->adc7 =  ((uint16_t) (*(inbuffer + offset)));
      this->adc7 |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->adc7);

     return offset;
    }

    const char * getType(){ return "rosserial_arduino/Adc"; };
    const char * getMD5(){ return "6d7853a614e2e821319068311f2af25b"; };

  };

}
#endif

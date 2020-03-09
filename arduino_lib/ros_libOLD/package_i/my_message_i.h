#ifndef _ROS_package_i_my_message_i_h
#define _ROS_package_i_my_message_i_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "geometry_msgs/WrenchStamped.h"

namespace package_i
{

  class my_message_i : public ros::Msg
  {
    public:
      typedef geometry_msgs::WrenchStamped _wrench_type;
      _wrench_type wrench;
      typedef uint32_t _score_type;
      _score_type score;

    my_message_i():
      wrench(),
      score(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->wrench.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->score >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->score >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->score >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->score >> (8 * 3)) & 0xFF;
      offset += sizeof(this->score);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->wrench.deserialize(inbuffer + offset);
      this->score =  ((uint32_t) (*(inbuffer + offset)));
      this->score |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->score |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->score |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->score);
     return offset;
    }

    const char * getType(){ return "package_i/my_message_i"; };
    const char * getMD5(){ return "c5f2bb8185ae9f22a4117af3e588377c"; };

  };

}
#endif

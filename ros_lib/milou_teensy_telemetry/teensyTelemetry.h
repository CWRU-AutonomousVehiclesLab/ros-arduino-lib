#ifndef _ROS_milou_teensy_telemetry_teensyTelemetry_h
#define _ROS_milou_teensy_telemetry_teensyTelemetry_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace milou_teensy_telemetry
{

  class teensyTelemetry : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef int32_t _state_type;
      _state_type state;
      int32_t RCSignal[3];
      float rcInterpretedSpeed[2];
      float autoInterpretedSpeed[2];
      float desMotorSpeed[2];
      float encoderRaw[2];
      float actualMotorSpeed[2];
      float pidedMotorSpeed[2];
      float motorCommand[2];
      float speedError[2];
      float integralError[2];
      float derivitiveError[2];

    teensyTelemetry():
      header(),
      state(0),
      RCSignal(),
      rcInterpretedSpeed(),
      autoInterpretedSpeed(),
      desMotorSpeed(),
      encoderRaw(),
      actualMotorSpeed(),
      pidedMotorSpeed(),
      motorCommand(),
      speedError(),
      integralError(),
      derivitiveError()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        int32_t real;
        uint32_t base;
      } u_state;
      u_state.real = this->state;
      *(outbuffer + offset + 0) = (u_state.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_state.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_state.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_state.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->state);
      for( uint32_t i = 0; i < 3; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_RCSignali;
      u_RCSignali.real = this->RCSignal[i];
      *(outbuffer + offset + 0) = (u_RCSignali.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_RCSignali.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_RCSignali.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_RCSignali.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->RCSignal[i]);
      }
      for( uint32_t i = 0; i < 2; i++){
      union {
        float real;
        uint32_t base;
      } u_rcInterpretedSpeedi;
      u_rcInterpretedSpeedi.real = this->rcInterpretedSpeed[i];
      *(outbuffer + offset + 0) = (u_rcInterpretedSpeedi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_rcInterpretedSpeedi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_rcInterpretedSpeedi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_rcInterpretedSpeedi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->rcInterpretedSpeed[i]);
      }
      for( uint32_t i = 0; i < 2; i++){
      union {
        float real;
        uint32_t base;
      } u_autoInterpretedSpeedi;
      u_autoInterpretedSpeedi.real = this->autoInterpretedSpeed[i];
      *(outbuffer + offset + 0) = (u_autoInterpretedSpeedi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_autoInterpretedSpeedi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_autoInterpretedSpeedi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_autoInterpretedSpeedi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->autoInterpretedSpeed[i]);
      }
      for( uint32_t i = 0; i < 2; i++){
      union {
        float real;
        uint32_t base;
      } u_desMotorSpeedi;
      u_desMotorSpeedi.real = this->desMotorSpeed[i];
      *(outbuffer + offset + 0) = (u_desMotorSpeedi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_desMotorSpeedi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_desMotorSpeedi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_desMotorSpeedi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->desMotorSpeed[i]);
      }
      for( uint32_t i = 0; i < 2; i++){
      offset += serializeAvrFloat64(outbuffer + offset, this->encoderRaw[i]);
      }
      for( uint32_t i = 0; i < 2; i++){
      offset += serializeAvrFloat64(outbuffer + offset, this->actualMotorSpeed[i]);
      }
      for( uint32_t i = 0; i < 2; i++){
      union {
        float real;
        uint32_t base;
      } u_pidedMotorSpeedi;
      u_pidedMotorSpeedi.real = this->pidedMotorSpeed[i];
      *(outbuffer + offset + 0) = (u_pidedMotorSpeedi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pidedMotorSpeedi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pidedMotorSpeedi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pidedMotorSpeedi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pidedMotorSpeed[i]);
      }
      for( uint32_t i = 0; i < 2; i++){
      union {
        float real;
        uint32_t base;
      } u_motorCommandi;
      u_motorCommandi.real = this->motorCommand[i];
      *(outbuffer + offset + 0) = (u_motorCommandi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_motorCommandi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_motorCommandi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_motorCommandi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motorCommand[i]);
      }
      for( uint32_t i = 0; i < 2; i++){
      union {
        float real;
        uint32_t base;
      } u_speedErrori;
      u_speedErrori.real = this->speedError[i];
      *(outbuffer + offset + 0) = (u_speedErrori.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_speedErrori.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_speedErrori.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_speedErrori.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->speedError[i]);
      }
      for( uint32_t i = 0; i < 2; i++){
      union {
        float real;
        uint32_t base;
      } u_integralErrori;
      u_integralErrori.real = this->integralError[i];
      *(outbuffer + offset + 0) = (u_integralErrori.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_integralErrori.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_integralErrori.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_integralErrori.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->integralError[i]);
      }
      for( uint32_t i = 0; i < 2; i++){
      union {
        float real;
        uint32_t base;
      } u_derivitiveErrori;
      u_derivitiveErrori.real = this->derivitiveError[i];
      *(outbuffer + offset + 0) = (u_derivitiveErrori.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_derivitiveErrori.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_derivitiveErrori.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_derivitiveErrori.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->derivitiveError[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        int32_t real;
        uint32_t base;
      } u_state;
      u_state.base = 0;
      u_state.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_state.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_state.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_state.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->state = u_state.real;
      offset += sizeof(this->state);
      for( uint32_t i = 0; i < 3; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_RCSignali;
      u_RCSignali.base = 0;
      u_RCSignali.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_RCSignali.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_RCSignali.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_RCSignali.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->RCSignal[i] = u_RCSignali.real;
      offset += sizeof(this->RCSignal[i]);
      }
      for( uint32_t i = 0; i < 2; i++){
      union {
        float real;
        uint32_t base;
      } u_rcInterpretedSpeedi;
      u_rcInterpretedSpeedi.base = 0;
      u_rcInterpretedSpeedi.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_rcInterpretedSpeedi.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_rcInterpretedSpeedi.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_rcInterpretedSpeedi.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->rcInterpretedSpeed[i] = u_rcInterpretedSpeedi.real;
      offset += sizeof(this->rcInterpretedSpeed[i]);
      }
      for( uint32_t i = 0; i < 2; i++){
      union {
        float real;
        uint32_t base;
      } u_autoInterpretedSpeedi;
      u_autoInterpretedSpeedi.base = 0;
      u_autoInterpretedSpeedi.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_autoInterpretedSpeedi.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_autoInterpretedSpeedi.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_autoInterpretedSpeedi.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->autoInterpretedSpeed[i] = u_autoInterpretedSpeedi.real;
      offset += sizeof(this->autoInterpretedSpeed[i]);
      }
      for( uint32_t i = 0; i < 2; i++){
      union {
        float real;
        uint32_t base;
      } u_desMotorSpeedi;
      u_desMotorSpeedi.base = 0;
      u_desMotorSpeedi.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_desMotorSpeedi.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_desMotorSpeedi.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_desMotorSpeedi.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->desMotorSpeed[i] = u_desMotorSpeedi.real;
      offset += sizeof(this->desMotorSpeed[i]);
      }
      for( uint32_t i = 0; i < 2; i++){
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->encoderRaw[i]));
      }
      for( uint32_t i = 0; i < 2; i++){
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->actualMotorSpeed[i]));
      }
      for( uint32_t i = 0; i < 2; i++){
      union {
        float real;
        uint32_t base;
      } u_pidedMotorSpeedi;
      u_pidedMotorSpeedi.base = 0;
      u_pidedMotorSpeedi.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pidedMotorSpeedi.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pidedMotorSpeedi.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pidedMotorSpeedi.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pidedMotorSpeed[i] = u_pidedMotorSpeedi.real;
      offset += sizeof(this->pidedMotorSpeed[i]);
      }
      for( uint32_t i = 0; i < 2; i++){
      union {
        float real;
        uint32_t base;
      } u_motorCommandi;
      u_motorCommandi.base = 0;
      u_motorCommandi.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_motorCommandi.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_motorCommandi.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_motorCommandi.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->motorCommand[i] = u_motorCommandi.real;
      offset += sizeof(this->motorCommand[i]);
      }
      for( uint32_t i = 0; i < 2; i++){
      union {
        float real;
        uint32_t base;
      } u_speedErrori;
      u_speedErrori.base = 0;
      u_speedErrori.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_speedErrori.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_speedErrori.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_speedErrori.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->speedError[i] = u_speedErrori.real;
      offset += sizeof(this->speedError[i]);
      }
      for( uint32_t i = 0; i < 2; i++){
      union {
        float real;
        uint32_t base;
      } u_integralErrori;
      u_integralErrori.base = 0;
      u_integralErrori.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_integralErrori.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_integralErrori.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_integralErrori.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->integralError[i] = u_integralErrori.real;
      offset += sizeof(this->integralError[i]);
      }
      for( uint32_t i = 0; i < 2; i++){
      union {
        float real;
        uint32_t base;
      } u_derivitiveErrori;
      u_derivitiveErrori.base = 0;
      u_derivitiveErrori.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_derivitiveErrori.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_derivitiveErrori.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_derivitiveErrori.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->derivitiveError[i] = u_derivitiveErrori.real;
      offset += sizeof(this->derivitiveError[i]);
      }
     return offset;
    }

    const char * getType(){ return "milou_teensy_telemetry/teensyTelemetry"; };
    const char * getMD5(){ return "f1f44222523fcc197c2c7cffbda8b9e7"; };

  };

}
#endif

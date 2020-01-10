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
      uint32_t RCSignal_length;
      typedef int32_t _RCSignal_type;
      _RCSignal_type st_RCSignal;
      _RCSignal_type * RCSignal;
      uint32_t rcInterpretedSpeed_length;
      typedef float _rcInterpretedSpeed_type;
      _rcInterpretedSpeed_type st_rcInterpretedSpeed;
      _rcInterpretedSpeed_type * rcInterpretedSpeed;
      uint32_t autoInterpretedSpeed_length;
      typedef float _autoInterpretedSpeed_type;
      _autoInterpretedSpeed_type st_autoInterpretedSpeed;
      _autoInterpretedSpeed_type * autoInterpretedSpeed;
      uint32_t desMotorSpeed_length;
      typedef float _desMotorSpeed_type;
      _desMotorSpeed_type st_desMotorSpeed;
      _desMotorSpeed_type * desMotorSpeed;
      uint32_t encoderRaw_length;
      typedef float _encoderRaw_type;
      _encoderRaw_type st_encoderRaw;
      _encoderRaw_type * encoderRaw;
      uint32_t actualMotorSpeed_length;
      typedef float _actualMotorSpeed_type;
      _actualMotorSpeed_type st_actualMotorSpeed;
      _actualMotorSpeed_type * actualMotorSpeed;
      uint32_t pidedMotorSpeed_length;
      typedef float _pidedMotorSpeed_type;
      _pidedMotorSpeed_type st_pidedMotorSpeed;
      _pidedMotorSpeed_type * pidedMotorSpeed;
      uint32_t motorCommand_length;
      typedef float _motorCommand_type;
      _motorCommand_type st_motorCommand;
      _motorCommand_type * motorCommand;

    teensyTelemetry():
      header(),
      state(0),
      RCSignal_length(0), RCSignal(NULL),
      rcInterpretedSpeed_length(0), rcInterpretedSpeed(NULL),
      autoInterpretedSpeed_length(0), autoInterpretedSpeed(NULL),
      desMotorSpeed_length(0), desMotorSpeed(NULL),
      encoderRaw_length(0), encoderRaw(NULL),
      actualMotorSpeed_length(0), actualMotorSpeed(NULL),
      pidedMotorSpeed_length(0), pidedMotorSpeed(NULL),
      motorCommand_length(0), motorCommand(NULL)
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
      *(outbuffer + offset + 0) = (this->RCSignal_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->RCSignal_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->RCSignal_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->RCSignal_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->RCSignal_length);
      for( uint32_t i = 0; i < RCSignal_length; i++){
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
      *(outbuffer + offset + 0) = (this->rcInterpretedSpeed_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->rcInterpretedSpeed_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->rcInterpretedSpeed_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->rcInterpretedSpeed_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->rcInterpretedSpeed_length);
      for( uint32_t i = 0; i < rcInterpretedSpeed_length; i++){
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
      *(outbuffer + offset + 0) = (this->autoInterpretedSpeed_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->autoInterpretedSpeed_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->autoInterpretedSpeed_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->autoInterpretedSpeed_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->autoInterpretedSpeed_length);
      for( uint32_t i = 0; i < autoInterpretedSpeed_length; i++){
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
      *(outbuffer + offset + 0) = (this->desMotorSpeed_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->desMotorSpeed_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->desMotorSpeed_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->desMotorSpeed_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->desMotorSpeed_length);
      for( uint32_t i = 0; i < desMotorSpeed_length; i++){
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
      *(outbuffer + offset + 0) = (this->encoderRaw_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->encoderRaw_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->encoderRaw_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->encoderRaw_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->encoderRaw_length);
      for( uint32_t i = 0; i < encoderRaw_length; i++){
      offset += serializeAvrFloat64(outbuffer + offset, this->encoderRaw[i]);
      }
      *(outbuffer + offset + 0) = (this->actualMotorSpeed_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->actualMotorSpeed_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->actualMotorSpeed_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->actualMotorSpeed_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->actualMotorSpeed_length);
      for( uint32_t i = 0; i < actualMotorSpeed_length; i++){
      offset += serializeAvrFloat64(outbuffer + offset, this->actualMotorSpeed[i]);
      }
      *(outbuffer + offset + 0) = (this->pidedMotorSpeed_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pidedMotorSpeed_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pidedMotorSpeed_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pidedMotorSpeed_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pidedMotorSpeed_length);
      for( uint32_t i = 0; i < pidedMotorSpeed_length; i++){
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
      *(outbuffer + offset + 0) = (this->motorCommand_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->motorCommand_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->motorCommand_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->motorCommand_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motorCommand_length);
      for( uint32_t i = 0; i < motorCommand_length; i++){
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
      uint32_t RCSignal_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      RCSignal_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      RCSignal_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      RCSignal_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->RCSignal_length);
      if(RCSignal_lengthT > RCSignal_length)
        this->RCSignal = (int32_t*)realloc(this->RCSignal, RCSignal_lengthT * sizeof(int32_t));
      RCSignal_length = RCSignal_lengthT;
      for( uint32_t i = 0; i < RCSignal_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_RCSignal;
      u_st_RCSignal.base = 0;
      u_st_RCSignal.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_RCSignal.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_RCSignal.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_RCSignal.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_RCSignal = u_st_RCSignal.real;
      offset += sizeof(this->st_RCSignal);
        memcpy( &(this->RCSignal[i]), &(this->st_RCSignal), sizeof(int32_t));
      }
      uint32_t rcInterpretedSpeed_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      rcInterpretedSpeed_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      rcInterpretedSpeed_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      rcInterpretedSpeed_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->rcInterpretedSpeed_length);
      if(rcInterpretedSpeed_lengthT > rcInterpretedSpeed_length)
        this->rcInterpretedSpeed = (float*)realloc(this->rcInterpretedSpeed, rcInterpretedSpeed_lengthT * sizeof(float));
      rcInterpretedSpeed_length = rcInterpretedSpeed_lengthT;
      for( uint32_t i = 0; i < rcInterpretedSpeed_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_rcInterpretedSpeed;
      u_st_rcInterpretedSpeed.base = 0;
      u_st_rcInterpretedSpeed.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_rcInterpretedSpeed.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_rcInterpretedSpeed.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_rcInterpretedSpeed.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_rcInterpretedSpeed = u_st_rcInterpretedSpeed.real;
      offset += sizeof(this->st_rcInterpretedSpeed);
        memcpy( &(this->rcInterpretedSpeed[i]), &(this->st_rcInterpretedSpeed), sizeof(float));
      }
      uint32_t autoInterpretedSpeed_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      autoInterpretedSpeed_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      autoInterpretedSpeed_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      autoInterpretedSpeed_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->autoInterpretedSpeed_length);
      if(autoInterpretedSpeed_lengthT > autoInterpretedSpeed_length)
        this->autoInterpretedSpeed = (float*)realloc(this->autoInterpretedSpeed, autoInterpretedSpeed_lengthT * sizeof(float));
      autoInterpretedSpeed_length = autoInterpretedSpeed_lengthT;
      for( uint32_t i = 0; i < autoInterpretedSpeed_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_autoInterpretedSpeed;
      u_st_autoInterpretedSpeed.base = 0;
      u_st_autoInterpretedSpeed.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_autoInterpretedSpeed.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_autoInterpretedSpeed.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_autoInterpretedSpeed.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_autoInterpretedSpeed = u_st_autoInterpretedSpeed.real;
      offset += sizeof(this->st_autoInterpretedSpeed);
        memcpy( &(this->autoInterpretedSpeed[i]), &(this->st_autoInterpretedSpeed), sizeof(float));
      }
      uint32_t desMotorSpeed_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      desMotorSpeed_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      desMotorSpeed_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      desMotorSpeed_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->desMotorSpeed_length);
      if(desMotorSpeed_lengthT > desMotorSpeed_length)
        this->desMotorSpeed = (float*)realloc(this->desMotorSpeed, desMotorSpeed_lengthT * sizeof(float));
      desMotorSpeed_length = desMotorSpeed_lengthT;
      for( uint32_t i = 0; i < desMotorSpeed_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_desMotorSpeed;
      u_st_desMotorSpeed.base = 0;
      u_st_desMotorSpeed.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_desMotorSpeed.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_desMotorSpeed.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_desMotorSpeed.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_desMotorSpeed = u_st_desMotorSpeed.real;
      offset += sizeof(this->st_desMotorSpeed);
        memcpy( &(this->desMotorSpeed[i]), &(this->st_desMotorSpeed), sizeof(float));
      }
      uint32_t encoderRaw_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      encoderRaw_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      encoderRaw_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      encoderRaw_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->encoderRaw_length);
      if(encoderRaw_lengthT > encoderRaw_length)
        this->encoderRaw = (float*)realloc(this->encoderRaw, encoderRaw_lengthT * sizeof(float));
      encoderRaw_length = encoderRaw_lengthT;
      for( uint32_t i = 0; i < encoderRaw_length; i++){
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->st_encoderRaw));
        memcpy( &(this->encoderRaw[i]), &(this->st_encoderRaw), sizeof(float));
      }
      uint32_t actualMotorSpeed_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      actualMotorSpeed_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      actualMotorSpeed_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      actualMotorSpeed_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->actualMotorSpeed_length);
      if(actualMotorSpeed_lengthT > actualMotorSpeed_length)
        this->actualMotorSpeed = (float*)realloc(this->actualMotorSpeed, actualMotorSpeed_lengthT * sizeof(float));
      actualMotorSpeed_length = actualMotorSpeed_lengthT;
      for( uint32_t i = 0; i < actualMotorSpeed_length; i++){
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->st_actualMotorSpeed));
        memcpy( &(this->actualMotorSpeed[i]), &(this->st_actualMotorSpeed), sizeof(float));
      }
      uint32_t pidedMotorSpeed_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pidedMotorSpeed_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pidedMotorSpeed_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pidedMotorSpeed_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pidedMotorSpeed_length);
      if(pidedMotorSpeed_lengthT > pidedMotorSpeed_length)
        this->pidedMotorSpeed = (float*)realloc(this->pidedMotorSpeed, pidedMotorSpeed_lengthT * sizeof(float));
      pidedMotorSpeed_length = pidedMotorSpeed_lengthT;
      for( uint32_t i = 0; i < pidedMotorSpeed_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_pidedMotorSpeed;
      u_st_pidedMotorSpeed.base = 0;
      u_st_pidedMotorSpeed.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pidedMotorSpeed.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pidedMotorSpeed.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pidedMotorSpeed.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_pidedMotorSpeed = u_st_pidedMotorSpeed.real;
      offset += sizeof(this->st_pidedMotorSpeed);
        memcpy( &(this->pidedMotorSpeed[i]), &(this->st_pidedMotorSpeed), sizeof(float));
      }
      uint32_t motorCommand_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      motorCommand_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      motorCommand_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      motorCommand_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->motorCommand_length);
      if(motorCommand_lengthT > motorCommand_length)
        this->motorCommand = (float*)realloc(this->motorCommand, motorCommand_lengthT * sizeof(float));
      motorCommand_length = motorCommand_lengthT;
      for( uint32_t i = 0; i < motorCommand_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_motorCommand;
      u_st_motorCommand.base = 0;
      u_st_motorCommand.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_motorCommand.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_motorCommand.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_motorCommand.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_motorCommand = u_st_motorCommand.real;
      offset += sizeof(this->st_motorCommand);
        memcpy( &(this->motorCommand[i]), &(this->st_motorCommand), sizeof(float));
      }
     return offset;
    }

    const char * getType(){ return "milou_teensy_telemetry/teensyTelemetry"; };
    const char * getMD5(){ return "732d02f235097e65d338c5ff439b22b5"; };

  };

}
#endif

#ifndef _WPI_SOFT_SERVO_H_
#define _WPI_SOFT_SERVO_H_

#include "addon.h"

namespace nodewpi {
  
  NAN_METHOD(softServoWrite);
  NAN_METHOD(softServoSetup);

  NAN_MODULE_INIT(init_softServo);

}

#endif
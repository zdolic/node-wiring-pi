#include <nan.h>

#include "softPwm.h"
#include "softTone.h"
#include "wiringPiI2C.h"
#include "wiringPiSPI.h"
#include "wiringSerial.h"
#include "wiringShift.h"
#include "wiringPiISR.h"
  
//#include "extensions/extensions.h"
//#include "devlib/devlib.h"

namespace nodewpi {
    NAN_MODULE_INIT(node-wiringPi)
}
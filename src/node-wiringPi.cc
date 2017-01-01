
// Node Module declaration and initialisation

namespace nodewpi {
    NAN_MODULE_INIT(node-wiringPi)
    {
        nodewpi::init_wiringPi();
        
        nodewpi::init_softPwm();
        nodewpi::init_softTone();

        nodewpi::init_wiringPiI2C();
        nodewpi::init_wiringPiSPI();
        nodewpi::init_wiringSerial();
        nodewpi::init_wiringShift();
    }
}

NODE_MODULE(node-wiringPi, nodewpi::node-wiringPi)
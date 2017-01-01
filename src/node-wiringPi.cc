
// Node Module declaration and initialisation

namespace nodewpi {
    NAN_METHOD(hello) {
        info.GetReturnValue().Set("Hello World");
    }

    NAN_MODULE_INIT(node-wiringPi)
    {
        NAN_EXPORT(target, hello);
        
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
#ifndef POWERCORE
#define POWERCORE
#include <iostream>

class PowerCore{
    public:
        PowerCore(bool CoreStatus);
        void changeStatus();
        bool getStatus();
    private:
        bool _CoreStatus;   
};
#endif
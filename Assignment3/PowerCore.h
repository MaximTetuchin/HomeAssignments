#ifndef POWERCORE
#define POWERCORE
#include <iostream>

class PowerCore{
    public:
        PowerCore(bool CoreStatus);
        void ChangeStatus();
        bool GetStatus() const;
    private:
        bool _CoreStatus;   
};
#endif
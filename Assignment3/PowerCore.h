/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 3
*/
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
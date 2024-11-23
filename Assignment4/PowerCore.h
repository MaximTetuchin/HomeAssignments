/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 4
*/
#ifndef POWERCORE
#define POWERCORE
#include <iostream>

class PowerCore
{
public:
    PowerCore(bool CoreStatus);
    PowerCore();
    void changeStatus();
    bool getStatus();
private:
    bool _CoreStatus;
};
#endif
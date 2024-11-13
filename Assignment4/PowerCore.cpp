/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 4
*/
#include "PowerCore.h"
PowerCore::PowerCore(bool CoreStatus): _CoreStatus(CoreStatus) {};
PowerCore::PowerCore()
{
    _CoreStatus = 0;
}
void PowerCore::changeStatus()
{
    if (_CoreStatus == 1)
    {
        _CoreStatus = 0;
    }
    else
    {
        _CoreStatus = 1;
    };
}

bool PowerCore::getStatus()
{
    return _CoreStatus;
}
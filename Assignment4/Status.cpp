/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 4
*/
#include "Status.h"
RobotStatus::RobotStatus(std::string status): _status(status) {};
std::string RobotStatus::getStatus()
{
    return _status;
}

void RobotStatus::setStatus(std::string newStatus)
{
    _status = newStatus;
}
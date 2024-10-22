#include "Status.h"
RobotStatus::RobotStatus(std::string status): _status(status){};
std::string RobotStatus::getStatus(){
    return _status;
}

void RobotStatus::setStatus(std::string newStatus){
    _status = newStatus;
}
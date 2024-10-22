#include "Status.h"
RobotStatus::RobotStatus(std::string status): _status(status){};
std::string RobotStatus::GetStatus(){
    return _status;
}

void RobotStatus::SetStatus(std::string newStatus){
    _status = newStatus;
}
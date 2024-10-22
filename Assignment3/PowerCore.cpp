#include "PowerCore.h"
PowerCore::PowerCore(bool CoreStatus): _CoreStatus(CoreStatus){};
void PowerCore::changeStatus(){
    if (_CoreStatus == 1){
        _CoreStatus = 0;
    } else {
        _CoreStatus = 1;
    };
}

bool PowerCore::getStatus(){
    return _CoreStatus;
}
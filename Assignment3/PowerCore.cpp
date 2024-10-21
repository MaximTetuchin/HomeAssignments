#include "PowerCore.h"
PowerCore::PowerCore(bool CoreStatus): _CoreStatus(CoreStatus){};
void PowerCore::ChangeStatus(){
    if (_CoreStatus == 1){
        _CoreStatus = 0;
    } else {
        _CoreStatus = 1;
    };
}

bool PowerCore::GetStatus() const {
    return _CoreStatus;
}
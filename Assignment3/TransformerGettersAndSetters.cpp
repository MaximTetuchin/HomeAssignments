#include "Transformer.h"

//! Сеттеры (реализация)
void Transformer::setCallSign(const std::string& callSign) {
    _callSign = callSign;
}
void Transformer::setMoveSpeed(int moveSpeed) {
    _moveSpeed = moveSpeed;
}
void Transformer::setIsGunEquiped(bool isGunEquiped) {
    _isGunEquiped = isGunEquiped;
}
void Transformer::setIsTransformed(bool isTransformed) {
    _isTransformed = isTransformed;
}
void Transformer::setCoreStatus(bool isCoreActive){
    _powerCore.changeStatus();
}

//! Геттеры (реализация)
std::string Transformer::getCallSign() {
    return _callSign;
}
int Transformer::getMoveSpeed() {
    return _moveSpeed;
}
bool Transformer::getIsGunEquiped() {
    return _isGunEquiped;
}
bool Transformer::getIsTransformed() {
    return _isTransformed;
}
bool Transformer::getCoreStatus() {
    return _powerCore.getStatus();
}
std::string Transformer::getStatus(RobotStatus& status){
    return status.getStatus();
}
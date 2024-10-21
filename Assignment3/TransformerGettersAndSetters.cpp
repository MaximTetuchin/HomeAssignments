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
    _powerCore.ChangeStatus();
}

//! Геттеры (реализация)
std::string Transformer::getCallSign() const {
    return _callSign;
}
int Transformer::getMoveSpeed() const {
    return _moveSpeed;
}
bool Transformer::getIsGunEquiped() const {
    return _isGunEquiped;
}
bool Transformer::getIsTransformed() const {
    return _isTransformed;
}
bool Transformer::getCoreStatus() const {
    return _powerCore.GetStatus();
}
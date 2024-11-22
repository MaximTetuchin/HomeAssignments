/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 3
*/
#include "Transformer.h"

//! Setters
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
void Transformer::setStatus(std::string newStatus){
    _robotStatus.setStatus(newStatus);
}

//! Getters
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
std::string Transformer::getStatus(){
    return _robotStatus.getStatus();
}
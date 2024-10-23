/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 3
*/
#include "Scouts.h"
#include <iostream>

//! Конструктор
Scouts::Scouts(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed, PowerCore coreStatus, int stealthLevel, int sensorRange)
    : Transformer(callSign, moveSpeed, isGunEquiped, isTransformed, coreStatus), //! Наследуем
      _stealthLevel(stealthLevel), 
      _sensorRange(sensorRange) {}

void Scouts::performRecon() {
    std::cout <<"Recon was performed.\n";
}

//! Геттеры
int Scouts::getStealthLevel() {
    return _stealthLevel;
}
int Scouts::getSensorRange() {
    return _sensorRange;
}

//! Сеттеры
void Scouts::setStealthLevel(int level) {
    _stealthLevel = level;
}
void Scouts::setSensorRange(int range) {
    _sensorRange = range;
}

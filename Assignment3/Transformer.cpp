/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 3
*/
#include "Transformer.h"
#include "PowerCore.h"
//! Конструктор и деструктор (реализация)
Transformer::Transformer(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed,PowerCore coreStatus):
    _callSign(callSign), 
    _moveSpeed(moveSpeed), 
    _isGunEquiped(isGunEquiped), 
    _isTransformed(isTransformed), 
    _powerCore(coreStatus){}
Transformer::~Transformer(){};

//! Методы (реализация)
void Transformer::pullOutTheGun() {
    if (_isGunEquiped == 0) {
        _isGunEquiped = 1;
    }
}

void Transformer::Transform() {
    if (_isTransformed == 0) {
        _isTransformed = 1;
    } else {
        _isTransformed = 0;
    }
}

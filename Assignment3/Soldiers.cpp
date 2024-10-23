/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 3
*/
#include "Soldiers.h"
#include <iostream>

Soldiers::Soldiers(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed, PowerCore coreStatus, int armorLevel, int firepower)
    : Transformer(callSign, moveSpeed, isGunEquiped, isTransformed, coreStatus), // Инициализация базового класса
      _armorLevel(armorLevel), 
      _firepower(firepower) {}

void Soldiers::engageCombat() {
    std::cout << "Soldier is engaging in combat!\n";
}

int Soldiers::getArmorLevel() {
    return _armorLevel;
}

int Soldiers::getFirepower() {
    return _firepower;
}

void Soldiers::setArmorLevel(int level) {
    _armorLevel = level;
}

void Soldiers::setFirepower(int power) {
    _firepower = power;
}

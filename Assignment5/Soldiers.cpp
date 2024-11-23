/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 5
*/
#include "Soldiers.h"
#include <iostream>

Soldiers::Soldiers(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed, PowerCore coreStatus, int armorLevel, int firepower)
    : Transformer(callSign, moveSpeed, isGunEquiped, isTransformed, coreStatus),
      _armorLevel(armorLevel),
      _firepower(firepower) {}

Soldiers::Soldiers(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed, PowerCore coreStatus, int armorLevel)
    : Transformer(callSign, moveSpeed, isGunEquiped, isTransformed, coreStatus),
      _armorLevel(armorLevel),_firepower(0) {}

Soldiers::Soldiers(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed, PowerCore coreStatus)
    : Transformer(callSign, moveSpeed, isGunEquiped, isTransformed, coreStatus),
      _armorLevel(0),_firepower(0) {}

Soldiers::Soldiers(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed)
    : Transformer(callSign, moveSpeed, isGunEquiped, isTransformed),
      _armorLevel(0),_firepower(0) {}

Soldiers::Soldiers(std::string callSign, int moveSpeed, bool isGunEquiped)
    : Transformer(callSign, moveSpeed, isGunEquiped),
      _armorLevel(0),_firepower(0) {}

Soldiers::Soldiers(std::string callSign, int moveSpeed)
    : Transformer(callSign, moveSpeed),
      _armorLevel(0),_firepower(0) {}

void Soldiers::engageCombat()
{
    std::cout << "Soldier is engaging in combat!\n";
}

std::string Soldiers::info()
{
    return "Callsign: " + _callSign + ", moveSpeed: " + std::to_string(_moveSpeed) + ", isGunEquiped: "
           + std::to_string(_isGunEquiped) +", isTransformed: " + std::to_string(_isTransformed) + "\n"
           + "PowerCore status: "+std::to_string(_powerCore.getStatus()) + ", Robot Status: " + _robotStatus.getStatus()
           + ", armorLevel: " + std::to_string(_armorLevel) + ", firepower: " + std::to_string(_firepower)+"\n";
}

std::ostream& operator<<(std::ostream& os,Soldiers& soldier)
{
    os<<soldier.info();
    return os;
}

int Soldiers::getArmorLevel()
{
    return _armorLevel;
}

int Soldiers::getFirepower()
{
    return _firepower;
}

void Soldiers::setArmorLevel(int level)
{
    _armorLevel = level;
}

void Soldiers::setFirepower(int power)
{
    _firepower = power;
}
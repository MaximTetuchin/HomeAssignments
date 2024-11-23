/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 4
*/
#include "Artillery.h"
#include <iostream>

Artillery::Artillery(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed, PowerCore coreStatus, int range, int ammoCapacity)
    : Transformer(callSign, moveSpeed, isGunEquiped, isTransformed, coreStatus),
      _range(range),
      _ammoCapacity(ammoCapacity) {}

Artillery::Artillery(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed, PowerCore coreStatus, int range)
    : Transformer(callSign, moveSpeed, isGunEquiped, isTransformed, coreStatus),
      _range(range),
      _ammoCapacity(0) {}

Artillery::Artillery(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed, PowerCore coreStatus)
    : Transformer(callSign, moveSpeed, isGunEquiped, isTransformed, coreStatus),
      _range(0),
      _ammoCapacity(0) {}

Artillery::Artillery(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed)
    : Transformer(callSign, moveSpeed, isGunEquiped, isTransformed),
      _range(0),
      _ammoCapacity(0) {}

Artillery::Artillery(std::string callSign, int moveSpeed, bool isGunEquiped)
    : Transformer(callSign, moveSpeed, isGunEquiped),
      _range(0),
      _ammoCapacity(0) {}

Artillery::Artillery(std::string callSign, int moveSpeed)
    : Transformer(callSign, moveSpeed),
      _range(0),
      _ammoCapacity(0) {}

void Artillery::fire()
{
    std::cout << "Artillery unit is firing!\n";
}

std::string Artillery::info()
{
    return "Callsign: " + _callSign + ", moveSpeed: " + std::to_string(_moveSpeed) + ", isGunEquiped: "
           + std::to_string(_isGunEquiped) +", isTransformed: " + std::to_string(_isTransformed) + "\n"
           + "PowerCore status: "+std::to_string(_powerCore.getStatus()) + ", Robot Status: " + _robotStatus.getStatus()
           + ", range: " + std::to_string(_range) + ",ammoCapacity: " + std::to_string(_ammoCapacity)+"\n";
}

std::ostream& operator<<(std::ostream& os,Artillery& artillery)
{
    os<<artillery.info();
    return os;
}


int Artillery::getRange()
{
    return _range;
}
void Artillery::setRange(int r)
{
    _range = r;
}
int Artillery::getAmmoCapacity()
{
    return _ammoCapacity;
}
void Artillery::setAmmoCapacity(int capacity)
{
    _ammoCapacity = capacity;
}

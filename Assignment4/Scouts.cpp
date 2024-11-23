/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 4
*/
#include "Scouts.h"
#include <iostream>

//! Constructor
Scouts::Scouts(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed, PowerCore coreStatus, int stealthLevel, int sensorRange)
    : Transformer(callSign, moveSpeed, isGunEquiped, isTransformed, coreStatus),
      _stealthLevel(stealthLevel),
      _sensorRange(sensorRange) {}

Scouts::Scouts(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed, PowerCore coreStatus, int stealthLevel)
    : Transformer(callSign, moveSpeed, isGunEquiped, isTransformed, coreStatus),
      _stealthLevel(stealthLevel),
      _sensorRange(0) {}

Scouts::Scouts(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed, PowerCore coreStatus)
    : Transformer(callSign, moveSpeed, isGunEquiped, isTransformed, coreStatus),
      _stealthLevel(0),
      _sensorRange(0) {}

Scouts::Scouts(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed)
    : Transformer(callSign, moveSpeed, isGunEquiped, isTransformed),
      _stealthLevel(0),
      _sensorRange(0) {}

Scouts::Scouts(std::string callSign, int moveSpeed, bool isGunEquiped)
    : Transformer(callSign, moveSpeed, isGunEquiped),
      _stealthLevel(0),
      _sensorRange(0) {}

Scouts::Scouts(std::string callSign, int moveSpeed)
    : Transformer(callSign, moveSpeed),
      _stealthLevel(0),
      _sensorRange(0) {}

void Scouts::performRecon()
{
    std::cout <<"Recon was performed.\n";
}

std::string Scouts::info()
{
    return "Callsign: " + _callSign + ", moveSpeed: " + std::to_string(_moveSpeed) + ", isGunEquiped: "
           + std::to_string(_isGunEquiped) +", isTransformed: " + std::to_string(_isTransformed) + "\n"
           + "PowerCore status: "+std::to_string(_powerCore.getStatus()) + ", Robot Status: " + _robotStatus.getStatus()
           + ", stealthLevel: " + std::to_string(_stealthLevel) + ", sensorRange: " + std::to_string(_sensorRange)+"\n";
}

std::ostream& operator<<(std::ostream& os,Scouts& scout)
{
    os<<scout.info();
    return os;
}

//! Getters
int Scouts::getStealthLevel()
{
    return _stealthLevel;
}
int Scouts::getSensorRange()
{
    return _sensorRange;
}

//! Setters
void Scouts::setStealthLevel(int level)
{
    _stealthLevel = level;
}
void Scouts::setSensorRange(int range)
{
    _sensorRange = range;
}

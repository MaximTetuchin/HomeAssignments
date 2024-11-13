/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 3
*/
#include "Transformer.h"
#include "PowerCore.h"
//! Constructor and destructor
Transformer::Transformer(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed,PowerCore coreStatus):
    _callSign(callSign),
    _moveSpeed(moveSpeed),
    _isGunEquiped(isGunEquiped),
    _isTransformed(isTransformed),
    _powerCore(coreStatus) {}

Transformer::Transformer(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed):
    _callSign(callSign),_moveSpeed(moveSpeed),_isGunEquiped(isGunEquiped),_isTransformed(isTransformed),_powerCore() {}

Transformer::Transformer(std::string callSign, int moveSpeed, bool isGunEquiped):
    _callSign(callSign),_moveSpeed(moveSpeed),_isGunEquiped(isGunEquiped),_isTransformed(0),_powerCore() {}

Transformer::Transformer(std::string callSign, int moveSpeed):
    _callSign(callSign),_moveSpeed(moveSpeed),_isGunEquiped(0),_isTransformed(0),_powerCore() {}

Transformer::~Transformer() {};

//! Methods
void Transformer::pullOutTheGun()
{
    if (_isGunEquiped == 0)
    {
        _isGunEquiped = 1;
    }
}

void Transformer::Transform()
{
    if (_isTransformed == 0)
    {
        _isTransformed = 1;
    }
    else
    {
        _isTransformed = 0;
    }
}

std::string Transformer::info()
{
    return "Callsign: " + _callSign + ",moveSpeed: " + std::to_string(_moveSpeed) + ",isGunEquiped: "
           + std::to_string(_isGunEquiped) +",isTransformed: " + std::to_string(_isTransformed)
           + ",PowerCore status: "+std::to_string(_powerCore.getStatus())+"\n";
}

std::ostream& operator<<(std::ostream& os, Transformer& transformer)
{
    os<<transformer.info();
    return os;
}
//! Let's assume that the faster a soldier is, the stronger he is
bool Transformer::operator<(Transformer& other)
{
    if (this->_moveSpeed<other._moveSpeed)
    {
        return true;
    }
    else
    {
        return false;
    }
}
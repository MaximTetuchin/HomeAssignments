/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 5
*/
#ifndef SCOUTS
#define SCOUTS
#include "Transformer.h"
#include <string>

class Scouts : public Transformer
{
public:
    Scouts(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed, PowerCore coreStatus, int _stealthLevel, int _sensorRange);
    Scouts(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed, PowerCore coreStatus, int _stealthLevel);
    Scouts(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed, PowerCore coreStatus);
    Scouts(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed);
    Scouts(std::string callSign, int moveSpeed, bool isGunEquiped);
    Scouts(std::string callSign, int moveSpeed);

    void performRecon();
    std::string info();
    friend std::ostream& operator<<(std::ostream& os,Scouts& scout);

    //! Setters
    int getStealthLevel();
    int getSensorRange();

    //! Getters
    void setStealthLevel(int level);
    void setSensorRange(int range);

private:
    int _stealthLevel;
    int _sensorRange;
};
#endif
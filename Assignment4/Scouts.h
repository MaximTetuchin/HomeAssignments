/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 3
*/
#ifndef SCOUTS
#define SCOUTS
#include "Transformer.h"
#include <string>

class Scouts : public Transformer {
public:
    Scouts(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed, PowerCore coreStatus, int _stealthLevel, int _sensorRange);
    void performRecon();

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
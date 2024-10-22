#ifndef SCOUTS
#define SCOUTS
#include "Transformer.h"
#include <string>

class Scouts : public Transformer {
public:
    Scouts(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed, PowerCore coreStatus, int _stealthLevel, int _sensorRange);
    void performRecon();

    //! Сеттеры
    int getStealthLevel();
    int getSensorRange();

    //! Геттеры
    void setStealthLevel(int level);
    void setSensorRange(int range);

private:
    int _stealthLevel;
    int _sensorRange; 
};
#endif
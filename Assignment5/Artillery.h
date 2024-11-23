/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 5
*/
#ifndef ARTILLERY
#define ARTILLERY
#include "Transformer.h"
#include <string>

class Artillery : public Transformer
{
public:
    Artillery(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed, PowerCore coreStatus, int range, int ammoCapacity);
    Artillery(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed, PowerCore coreStatus, int range);
    Artillery(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed, PowerCore coreStatus);
    Artillery(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed);
    Artillery(std::string callSign, int moveSpeed, bool isGunEquiped);
    Artillery(std::string callSign, int moveSpeed);
    void fire();
    std::string info();
    friend std::ostream& operator<<(std::ostream& os,Artillery& artillery);

    //! Getters
    int getRange();
    int getAmmoCapacity();

    //! Setters
    void setRange(int r);
    void setAmmoCapacity(int capacity);

private:
    int _range;
    int _ammoCapacity;
};
#endif

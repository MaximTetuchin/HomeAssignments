/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 3
*/
#ifndef ARTILLERY
#define ARTILLERY
#include "Transformer.h"
#include <string>

class Artillery : public Transformer {
public:
    Artillery(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed, PowerCore coreStatus, int range, int ammoCapacity);
    void fire();

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

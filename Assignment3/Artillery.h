#ifndef ARTILLERY
#define ARTILLERY
#include "Transformer.h"
#include <string>

class Artillery : public Transformer {
public:
    Artillery(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed, PowerCore coreStatus, int range, int ammoCapacity);
    void fire();

    //! Геттеры
    int getRange();
    int getAmmoCapacity();

    //! Сеттеры
    void setRange(int r);
    void setAmmoCapacity(int capacity);

private:
    int _range;
    int _ammoCapacity;
};
#endif

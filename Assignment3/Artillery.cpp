#include "Artillery.h"
#include <iostream>

Artillery::Artillery(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed, PowerCore coreStatus, int range, int ammoCapacity)
    : Transformer(callSign, moveSpeed, isGunEquiped, isTransformed, coreStatus),
      _range(range), 
      _ammoCapacity(ammoCapacity) {}
void Artillery::fire() {
    std::cout << "Artillery unit is firing!" << std::endl;
}
int Artillery::getRange() {
    return _range;
}
void Artillery::setRange(int r) {
    _range = r;
}
int Artillery::getAmmoCapacity() {
    return _ammoCapacity;
}
void Artillery::setAmmoCapacity(int capacity) {
    _ammoCapacity = capacity;
}

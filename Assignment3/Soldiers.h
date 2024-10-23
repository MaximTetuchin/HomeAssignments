/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 3
*/
#ifndef SOLDIERS
#define SOLDIERS
#include "Transformer.h"
#include <string>

class Soldiers : public Transformer {
public:
    Soldiers(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed, PowerCore coreStatus, int armorLevel, int firepower);
    void engageCombat();

    //! Геттеры
    int getArmorLevel();
    int getFirepower();

    //! Сеттеры
    void setArmorLevel(int level);
    void setFirepower(int power);

private:
    int _armorLevel;
    int _firepower;
};

#endif

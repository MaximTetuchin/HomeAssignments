/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 4
*/
#ifndef SOLDIERS
#define SOLDIERS
#include "Transformer.h"
#include <string>

class Soldiers : public Transformer {
public:
    Soldiers(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed, PowerCore coreStatus, int armorLevel, int firepower);
    Soldiers(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed, PowerCore coreStatus, int armorLevel);
    Soldiers(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed, PowerCore coreStatus);
    Soldiers(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed);
    Soldiers(std::string callSign, int moveSpeed, bool isGunEquiped);
    Soldiers(std::string callSign, int moveSpeed);
    //! Methods
    void engageCombat();
    std::string info();
    friend std::ostream& operator<<(std::ostream& os,Soldiers& soldier);

    //! Getters
    int getArmorLevel();
    int getFirepower();

    //! Setters
    void setArmorLevel(int level);
    void setFirepower(int power);

private:
    int _armorLevel;
    int _firepower;
};

#endif

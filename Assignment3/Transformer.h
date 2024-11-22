/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 3
*/
#ifndef TRANSFORMER
#define TRANSFORMER
#include "PowerCore.h"
#include "Status.h"
#include <string>
#include <iostream>

class Transformer {
    public:
        //! Constructor and destructor
        Transformer(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed, PowerCore core);
        ~Transformer();

        //! Class methods
        void pullOutTheGun();
        void Transform();

        //! Setters
        void setCallSign(const std::string& callSign);
        void setMoveSpeed(int moveSpeed);
        void setIsGunEquiped(bool isGunEquiped);
        void setIsTransformed(bool isTransformed);
        void setCoreStatus(bool isCoreActive);
        void setStatus(std::string newStatus);

        //! Getters
        std::string getCallSign();
        int getMoveSpeed();
        bool getIsGunEquiped();
        bool getIsTransformed();
        bool getCoreStatus();
        std::string getStatus();

    private:
        std::string _callSign;
        int _moveSpeed;
        bool _isGunEquiped;
        bool _isTransformed;
        PowerCore _powerCore; //! associativity
        RobotStatus _robotStatus; //! composition
};
#endif
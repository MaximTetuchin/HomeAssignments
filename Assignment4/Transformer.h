/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 4
*/
#ifndef TRANSFORMER
#define TRANSFORMER
#include "PowerCore.h"
#include "Status.h"
#include <string>
#include <iostream>

class Transformer {
        friend class Soldiers;
        friend class Scouts;
        friend class Artillery;
    public:
        //! Constructor and destructor
        Transformer(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed, PowerCore core);
        Transformer(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed);
        Transformer(std::string callSign, int moveSpeed, bool isGunEquiped);
        Transformer(std::string callSign, int moveSpeed);
        ~Transformer();


        friend std::ostream& operator<<(std::ostream& os, Transformer& transformer);

        //! Class methods
        void pullOutTheGun();
        void Transform();
        std::string info();

        //! Setters
        void setCallSign(const std::string& callSign);
        void setMoveSpeed(int moveSpeed);
        void setIsGunEquiped(bool isGunEquiped);
        void setIsTransformed(bool isTransformed);
        void setCoreStatus(bool isCoreActive);
        void setStatus(std::string Status,RobotStatus& status);

        //! Getters
        std::string getCallSign();
        int getMoveSpeed();
        bool getIsGunEquiped();
        bool getIsTransformed();
        bool getCoreStatus();
        std::string getStatus(RobotStatus& status);

        //! Stronger?
        bool operator<(Transformer& other);
    private:
        std::string _callSign;
        int _moveSpeed;
        bool _isGunEquiped;
        bool _isTransformed;
        PowerCore _powerCore;
};
#endif
#ifndef TRANSFORMER
#define TRANSFORMER
#include "PowerCore.h"
#include <string>
#include <iostream>

class Transformer {
    public:
        //! Конструктор и деструктор (Объявление)
        Transformer(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed, PowerCore core);
        ~Transformer();

        //! Методы класса (Объявление)
        void pullOutTheGun();
        void Transform();

        //! Сеттеры (Объявление)
        void setCallSign(const std::string& callSign);
        void setMoveSpeed(int moveSpeed);
        void setIsGunEquiped(bool isGunEquiped);
        void setIsTransformed(bool isTransformed);
        void setCoreStatus(bool isCoreActive);

        //! Геттеры (Объявление)
        std::string getCallSign() const;
        int getMoveSpeed() const;
        bool getIsGunEquiped() const;
        bool getIsTransformed() const;
        bool getCoreStatus() const;

    //! Поля
    private:
        std::string _callSign;
        int _moveSpeed;
        bool _isGunEquiped;
        bool _isTransformed;
        PowerCore _powerCore;
};
#endif
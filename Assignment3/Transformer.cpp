#include <iostream>
#include <string>
class Transformer{
    //! Объявляем методы
    public:
        void pullOutTheGun();
        void Transform();
        void ShowInfo(){
            std::cout<<_callSign<<" "<<_moveSpeed<<" "<<_HP<<" "<<_isGunEquiped<<"\n";
        };

    //! Объявляем Поля
    private:
        std::string _callSign;
        int _moveSpeed;
        int _HP;
        bool _isGunEquiped;
     
    //! Объявим конструктор
    public:
        Transformer(std::string callSign,int moveSpeed,int HP,bool isGunEquiped):
        _callSign(callSign), _moveSpeed(moveSpeed),_HP(HP),_isGunEquiped(isGunEquiped){}
};

int main(){
    std::string callSign = "Dakara ima ichibyou goto ni";
    int moveSpeed = 40;
    int HP = 100;
    bool isGunEquiped = 0;

    Transformer Optimus(callSign,moveSpeed,HP,isGunEquiped);
    Optimus.ShowInfo();
}
#include "Transformer.h"
#include "PowerCore.h"

//! Конструктор и деструктор (реализация)
Transformer::Transformer(std::string callSign, int moveSpeed, bool isGunEquiped, bool isTransformed,PowerCore coreStatus):
    _callSign(callSign), 
    _moveSpeed(moveSpeed), 
    _isGunEquiped(isGunEquiped), 
    _isTransformed(isTransformed), 
    _powerCore(coreStatus){}
Transformer::~Transformer(){};

//! Методы (реализация)
void Transformer::pullOutTheGun() {
    if (_isGunEquiped == 0) {
        _isGunEquiped = 1;
    }
}

void Transformer::Transform() {
    if (_isTransformed == 0) {
        _isTransformed = 1;
    } else {
        _isTransformed = 0;
    }
}

int main(){
    std::string callSign = "Optimus Prime";
    int moveSpeed = 100;
    bool isGunEquiped = true;
    bool isTransformed = false;
    PowerCore coreStatus(1);
    Transformer transformer(callSign, moveSpeed, isGunEquiped, isTransformed, coreStatus);
    bool a = transformer.getCoreStatus();
    std::cout<< a <<"\n";
    transformer.setCoreStatus(a);
    bool b = transformer.getCoreStatus();
    std::cout<< b <<"\n";
    std::string q = "Hiiiii";
    RobotStatus prime(q);
    std::cout<<transformer.getStatus(prime)<<"\n";
    
}
#include "Transformer.h"
#include <iostream>

int main(){
    PowerCore Core(true); // Robot Core status, composition
    RobotStatus Status("Soldier"); // Robot Status, associativity
    Transformer Autobot1("Raf",100,1,0,Core);
    std::string a = Autobot1.getStatus(Status);
    std::cout<<a<<"\n";
    Autobot1.setStatus("Legend",Status);
    std::string b = Autobot1.getStatus(Status);
    std::cout<<b<<"\n";
}
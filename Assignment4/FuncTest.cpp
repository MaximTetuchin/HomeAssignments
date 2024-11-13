#include "Transformer.h"
#include "Soldiers.h"
#include "Scouts.h"
#include <iostream>
#include "Artillery.h"

int main(){
    PowerCore Core(true); // Robot Core status, composition
    RobotStatus Status("Soldier"); // Robot Status, associativity
    Transformer Autobot1("Raf",100);
    //std::string a = Autobot1.getStatus(Status);
    //std::cout<<a<<"\n";
    //Autobot1.setStatus("Legend",Status);
    //std::string b = Autobot1.getStatus(Status);
    //std::cout<<b<<"\n";
    //std::cout<<Autobot1<<"\n";
    std::cout<<Autobot1;
    Soldiers Autobot2("Legend",100);
    Scouts Autobot3("Legend",110);
    Artillery Autobot4("Legend",100);
    std::cout<<Autobot4;
    
}
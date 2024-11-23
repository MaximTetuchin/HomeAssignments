#include "Transformer.h"
#include "Soldiers.h"
#include "Scouts.h"
#include <iostream>
#include "Artillery.h"

int main()
{
    PowerCore Core(true); // Robot Core status, composition
    Transformer Autobot1("Raf",100);
    //std::string a = Autobot1.getStatus(Status);
    //std::cout<<a<<"\n";
    //Autobot1.setStatus("Legend",Status);
    //std::string b = Autobot1.getStatus(Status);
    //std::cout<<b<<"\n";
    //std::cout<<Autobot1<<"\n";
    Soldiers Autobot2("Legend",100);
    Scouts Autobot3("Legend",110);
    Artillery Autobot4("Legend",80);
    std::cout<<Autobot1;
    //std::cout<<Autobot2;
    //std::cout<<Autobot3;
    //std::cout<<Autobot4;
    std::cout << "operator '==' check: " << (Autobot1==Autobot2) << "\n";
    std::cout << "operator '<' check: " << (Autobot1<Autobot3) << "\n";
    std::cout << "operator '>' check: " << (Autobot1>Autobot4) << "\n";
}
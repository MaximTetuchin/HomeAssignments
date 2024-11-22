#include "Transformer.h"
#include <iostream>

int main(){
    PowerCore Core(true); // Robot Core status, associativity
    Transformer Autobot1("Raf",100,1,0,Core);
    std::string a = Autobot1.getStatus();
    std::cout<<a<<"\n";
    Autobot1.setStatus("Legend");
    std::string b = Autobot1.getStatus();
    std::cout<<b<<"\n";
    std::cout<<"My code is finally working!!!\n";
}
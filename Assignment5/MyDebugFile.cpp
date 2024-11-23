/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 5
*/
#include "Transformer.h"
#include "Soldiers.h"
#include "Scouts.h"
#include <vector>
#include <iostream>
#include "Artillery.h"

int main()
{
    std::cout<<"-----------Virtual methods test-----------\n";
    PowerCore Core(true);
    Transformer Autobot1("Raf",100);
    Autobot1.ultimative();
    Autobot1.scream();
    Autobot1.damaged();

    std::cout<<"------------Pointer test--------------\n";
    Soldiers foe("Tim",100);
    Soldiers* test = &foe;
    test->damaged();
    
    std::cout<<"------------Vector test--------------\n";
    std::vector<Transformer*> obj;
    obj.push_back(new Artillery("Enigma",100));
    obj.push_back(new Artillery("Huskar",200));
    obj.push_back(new Artillery("Invoker",300));

    obj.push_back(new Soldiers("Pudge",100));
    obj.push_back(new Soldiers("Juggernaut",200));
    obj.push_back(new Soldiers("Axe",300));

    obj.push_back(new Scouts("Phantom Assassin",100));
    obj.push_back(new Scouts("Shadow Fiend",200));
    obj.push_back(new Scouts("Earthshaker",300));

    for (auto* t : obj) {
        t->ultimative(); 
        t->damaged();
        t->scream();
        std::cout << '\n';
    }
}
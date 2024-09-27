/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Hello_world project
*/
#include "function_header.hpp"
#include <iostream>
using namespace std;

void hello_world_output(){
    string word;
    while (true) {
        cout<<"Введите текст:";
        cin>>word;
        cout << "Hello, " << word << endl;
    }
}

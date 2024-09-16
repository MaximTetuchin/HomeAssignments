#include "function_header.hpp"
#include <iostream>
using namespace std;

void hello_world_output(){
    string word;
    while (true) {
        cin>>word;
        cout << "Hello, " << word << endl;
    }
}

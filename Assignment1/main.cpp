/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Hello_world project
*/

/* Inputs */
#include "functions_declaration.hpp"

/* Main code */
int main(){
    std::cout<<"To exit the cycle type '-'\n";
    while (true)
    {
        std::string word;
        std::cout << "Enter a word: ";
        std::cin>> word ;
        if (word=="-"){
            break;
        }
        HelloWorldOutput(word);
    }

    return 0;
}
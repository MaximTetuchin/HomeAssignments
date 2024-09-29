/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Hello_world project
*/
#include <iostream>    // Перенести в хэдер
#include "function_header.hpp"
using namespace std;    // Уже не нужен

int main(){
    while (true)
    {
        std::string word;
        std::cout<<"Введите текст: ";
        std::cin>>word;
        hello_world_output(word);
        // Добавить условие выхода их цикла
    }
    return 0;
}

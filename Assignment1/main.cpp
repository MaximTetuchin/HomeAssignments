/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Hello_world project
*/

/* Инпуты */
#include "functions_declaration.hpp"

/* Код */
int main(){
    std::cout<<"Чтобы выйти из цикла,отправьте программе строку '-'\n";
    while (true)
    {
        std::string word;
        std::cout << "Введите текст: ";
        std::cin>> word ;
        if (word=="-"){
            break;
        }
        HelloWorldOutput(word);
    }

    return 0;
}
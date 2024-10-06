#include "functions_declaration.hpp"

int main(){
    {
        std::string filePath;
        std::cout<<"Сейчас Вы можете указать относительный путь файла для проверки\n";
        std::cout<<"Если же Вы введете в консоль '-',то будет отреверсирован файл putTextHere.txt\n";
        std::cin >> filePath;
        TextReverse(filePath);
    }
    std::cout<<"\n";
    {
        std::cin.ignore();
        std::cout<<"А теперь перейдем к обратной польской записи числа\n";
        std::cout<<"Введи выражение,которое хочешь вычислить:\n";
        std::string input;
        std::getline(std::cin,input);
        ReversePolishEntry(input);
    }
}
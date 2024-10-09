#include "functions_declaration.hpp"

int main(){
    std::string filePath;
    std::cout<<"Сейчас Вы можете указать относительный путь файла для проверки\n";
    std::cout<<"Если же Вы введете в консоль '-',то будет отреверсирован файл putTextHere.txt\n";
    std::cin >> filePath;
    TextReverse(filePath);
}
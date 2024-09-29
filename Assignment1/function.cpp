/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Hello_world project
*/
// Сделать название файла более информативным
#include "function_header.hpp"
#include <iostream>    // Перенести include'ы в заголовочный файл
#include <string>
void hello_world_output(std::string word){
    std::cout << "Hello, " << word << "\n";
}

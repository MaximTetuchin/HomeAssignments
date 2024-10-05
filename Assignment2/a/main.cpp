#include <iostream>
#include <filesystem>
#include <fstream>
#include <string>

int main(){
    std::ifstream input_file; // Объявляем входной файл
    std::string filePath = "bin_example.jpg"; // Вводим путь используемого файла
    input_file.open(filePath,std::ios::binary|std::ios::in); //? Определяем файл (?)
    int fileSize = std::filesystem::file_size(filePath); // Узнаем размер файла
    char* fileArray = new char[fileSize]; // Выделяем массив длинной в размер файл
}
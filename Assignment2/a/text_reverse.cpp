#include "functions_declaration.hpp"
#include <filesystem>
#include <fstream>
#include <algorithm>

void TextReverse(std::string filePath){
    std::ifstream input_file; // Объявляем входной файл
    if (filePath=="-"){
        filePath = "putTextHere.txt"; 
    }
    input_file.open(filePath,std::ios::binary|std::ios::in); // Определяем входной файл файл 
    int fileSize = std::filesystem::file_size(filePath); // Узнаем размер файла
    char* fileArray = new char[fileSize]; // Выделяем массив длинной с размер файла
    input_file.read(fileArray,fileSize); // Читаем файл в массив
    std::reverse(fileArray, fileArray + fileSize); // Реверсируем массив
    std::ofstream output_file("new_file.txt", std::ios::binary | std::ios::out); // Готовим фаайл к записи
    output_file.write(fileArray, fileSize); // Пишем файл
    delete[] fileArray; // Освобождаем память
    input_file.close(); // Закрываем входной файл
    output_file.close(); // Закрываем выходной файл
}
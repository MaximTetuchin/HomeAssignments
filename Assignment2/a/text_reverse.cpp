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
    int fileSize = std::filesystem::file_size(filePath);
    char* fileArray = new char[fileSize]; // Выделяем массив длинной с размер файла
    input_file.read(fileArray,fileSize); // Читаем файл в массив
    std::reverse(fileArray, fileArray + fileSize);
    std::ofstream output_file("new_file.txt", std::ios::binary | std::ios::out); // Готовим фаайл к записи
    output_file.write(fileArray, fileSize); // Пишем файл
    delete[] fileArray; 
    /* Закрываем используемые файлы */
    input_file.close();
    output_file.close();
    std::cout << "Данные успешно записаны в файл.\n";
}
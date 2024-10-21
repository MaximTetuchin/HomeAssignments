/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 2b
*/

/* Код */
#include <iostream>
#include <string>
#include <sstream>

int main(){
    /* Есть 2 способа решить поставленную задачу
    1) С помощью 2 массивов. Но тогда придется каждый раз копировать эллементы одного массива в другой,
    что долго
    2) Задать динамический массив длинной в n элементов, тогда и двигать указатель
    */
    double* stack = new double[100];
    double* j = stack; // указатель на начало массива

    std::cout<<"Введите обратную польскую запись\n";
    std::string word; // Переменная для хранения конкретного символа
    /* Создаем поток*/
    std::string userInput;
    std::getline(std::cin,userInput);
    std::stringstream stream(userInput);

    /*Пишем условие*/
    while (stream>>word){
        if (word=="*" || word=="+" || word == "-" || word == "/"){
            if (word=="*"){
                double element1 = *j;
                j--;
                double element2 = *j;
                *j = element1*element2;
            }
            if (word=="+"){
                double element1 = *j;
                j--;
                double element2 = *j;
                *j = element1+element2;
            }
            if (word=="-"){
                double element1 = *j;
                j--;
                double element2 = *j;
                *j = element2-element1;
            }
            if (word=="/"){
                double element1 = *j;
                j--;
                double element2 = *j;
                *j = element2/element1;
            }
        } else {
            j++;
            int str_to_int = stol(word);
            *j = str_to_int;
        }
    }
    std::cout<<*j<<"\n";
    delete[] stack;
}

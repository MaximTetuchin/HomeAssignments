#include <stack>
#include <sstream>
#include "functions_declaration.hpp"

void ReversePolishEntry(std::string userInput){
    std::stringstream stream(userInput);
    std::stack<int> steck; //! В стеке у нас хранятся ТОЛЬКО инты
    std::string word; // Переменная для хранения конкретного символа
    while (stream>>word){
        if (word=="*" || word=="+" || word == "-" || word == "/"){
            if (word=="*"){
                int element_from_steck_1 = steck.top();
                steck.pop();
                int elemet_from_steck_2 = steck.top();
                steck.pop();
                int result = element_from_steck_1 * elemet_from_steck_2;
                steck.push(result);
            }
            if (word=="+"){
                int element_from_steck_1 = steck.top();
                steck.pop();
                int elemet_from_steck_2 = steck.top();
                steck.pop();
                int result = element_from_steck_1 + elemet_from_steck_2;
                steck.push(result);
            }
            if (word=="-"){
                int element_from_steck_1 = steck.top();
                steck.pop();
                int elemet_from_steck_2 = steck.top();
                steck.pop();
                int result = elemet_from_steck_2 - element_from_steck_1;
                steck.push(result);
            }
            if (word=="/"){
                int element_from_steck_1 = steck.top();
                steck.pop();
                int elemet_from_steck_2 = steck.top();
                steck.pop();
                int result = elemet_from_steck_2/ element_from_steck_1;
                steck.push(result);
            }
        } else {
            int str_to_int = stol(word);
            steck.push(str_to_int);
        }
    }
    std::cout<<steck.top()<<"\n";
    steck.pop();
}
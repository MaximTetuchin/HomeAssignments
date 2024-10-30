#include "imageFunction.hpp"

int main(){
    int height = 615;
    int width = 736;
    std::string path = "Images/testImg.raw";
    std::string outPath = "Images/Monika.raw";
    image Monika(width,height,path);
    Monika.readImage();
    Monika.rotateImage();
    Monika.saveToRaw(outPath);
}
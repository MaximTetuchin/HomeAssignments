#include <iostream>
#include <string>
#include <fstream>
#include <memory>

#ifndef IMAGE
#define IMAGE
class image{
    //! Constructor
    public:
        image(int width, int height, std::string path);

    //! Methods
    public:
        void openImage();

    //! Variables
    private:
        int _width;
        int _height;
        std::string _path;
        uint8_t* imageData = new uint8_t[_width * _height];
};  
#endif
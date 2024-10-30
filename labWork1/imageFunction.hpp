#include <iostream>
#include <string>
#include <fstream>
#include <memory>

#ifndef IMAGE
#define IMAGE
class image{
    //! Constructor and destructor
    public:
        image(int width, int height, std::string path);
        ~image();

    //! Methods
    public:
        void readImage();
        void rotateImage();
        void saveToRaw(std::string outputFileName);

        void checkMatrix(); //* Debug function

    //! Variables
    private:
        int _width;
        int _height;
        std::string _path;
        uint8_t* _imageMatrix;
};  
#endif
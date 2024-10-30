#include "imageFunction.hpp"

//! Constructor
image::image(int width,int height, std::string path):
    _width(width),
    _height(height),    
    _path(path){
    _imageMatrix = new uint8_t[_width * _height]();
    }

//! Destructor
image::~image() {
    delete[] _imageMatrix;
}

//! Methods
void image::readImage(){ //* Reading the input image
    std::ifstream openedImage(_path, std::ios::binary);
    if (!openedImage){
        std::cerr << "Check your filepath" << std::endl; //! Error
    }
    openedImage.read(reinterpret_cast<char*>(_imageMatrix),_width*_height);
    openedImage.close();
}

void image::rotateImage(){ //* Rotating the image
    uint8_t* _stepMatrix = new uint8_t[_height * _width]; //& new block of memory
    //&  _imageMatrix right now is 1D array, so..
    for (int i = 0;i<_height;i++){ 
        for (int j = 0; j < _width; j++) {
            _stepMatrix[j*_height + (_height-1-i)] = _imageMatrix[i*_width+j];
        }
    }
    delete[] _imageMatrix;
    _imageMatrix = _stepMatrix;
    std::swap(_height,_width); //* Because of matrix rotation
}

void image::saveToRaw(std::string outputFileName){ //* Saving the RAW image
    std::ofstream matrixOutput (outputFileName,std::ios::binary);
    matrixOutput.write(reinterpret_cast<char*>(_imageMatrix),(_height*_width));
}

void image::checkMatrix(){ //* Debug function
    for (int i = 0; i < _height; ++i) {
        for (int j = 0; j < _width; ++j) { 
            std::cout << static_cast<int>(_imageMatrix[i * _width + j]) << " ";
        }
        std::cout << std::endl; 
    }
}

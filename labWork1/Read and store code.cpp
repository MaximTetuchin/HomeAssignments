#include <iostream>
#include <string>
#include <fstream>
#include <memory>   

int main() {
    // Example parameters
    const int width = 640;   // Width of the image
    const int height = 480;  // Height of the image
    const int channels = 1;   // Number of channels (1 for grayscale)

    // Dynamically allocate a contiguous block of memory for the image
    uint8_t* imageMatrix = new uint8_t[width * height * channels];

    // Load the raw image data
    std::ifstream file("testImg.raw", std::ios::binary);
    if (!file) {
        std::cerr << "Error: Unable to open file!" << std::endl;
        delete[] imageMatrix; // Free memory before returning
        return 1;
    }

    // Read the data into the allocated memory
    file.read(reinterpret_cast<char*>(imageMatrix), width * height * channels);
    file.close();

    // Output all pixel values (rows and columns)
    std::cout << "Image pixel values (all rows and columns):" << std::endl;
    for (int y = 0; y < height; ++y) {  // Loop over rows
        for (int x = 0; x < width; ++x) {  // Loop over columns
            // Access the pixel value using linear indexing
            std::cout << static_cast<int>(imageMatrix[y * width + x]) << " ";
        }
        std::cout << std::endl; // New line after each row
    }

    // Free allocated memory
    delete[] imageMatrix;

    return 0;
}

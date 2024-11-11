// main.cpp
#include "FileCompressor.h"
#include <iostream>

int main() {
    FileCompressor compressor;
    std::string inputFile, compressedFile, decompressedFile;
    
    std::cout << "Enter the file to compress: ";
    std::cin >> inputFile;
    compressedFile = "compressed.huff";
    decompressedFile = "decompressed.txt";
    
    compressor.compressFile(inputFile, compressedFile);
    std::cout << "File compressed successfully!\n";

    compressor.decompressFile(compressedFile, decompressedFile);
    std::cout << "File decompressed successfully!\n";

    return 0;
}

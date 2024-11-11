// FileCompressor.h
#ifndef FILECOMPRESSOR_H
#define FILECOMPRESSOR_H

#include "HuffmanTree.h"
#include <fstream>
#include <string>

class FileCompressor {
public:
    void compressFile(const std::string &inputFile, const std::string &outputFile);
    void decompressFile(const std::string &inputFile, const std::string &outputFile);
};

#endif // FILECOMPRESSOR_H

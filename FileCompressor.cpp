// FileCompressor.cpp
#include "FileCompressor.h"

void FileCompressor::compressFile(const std::string &inputFile, const std::string &outputFile) {
    std::ifstream in(inputFile, std::ios::binary);
    std::string data((std::istreambuf_iterator<char>(in)), std::istreambuf_iterator<char>());
    in.close();

    HuffmanTree tree;
    tree.buildTree(data);
    std::string encodedData = tree.encode(data);

    std::ofstream out(outputFile, std::ios::binary);
    out << encodedData;
    out.close();
}

void FileCompressor::decompressFile(const std::string &inputFile, const std::string &outputFile) {
    std::ifstream in(inputFile, std::ios::binary);
    std::string encodedData((std::istreambuf_iterator<char>(in)), std::istreambuf_iterator<char>());
    in.close();

    HuffmanTree tree;
    tree.buildTree(encodedData);  // Assuming the tree structure is pre-built
    std::string decodedData = tree.decode(encodedData);

    std::ofstream out(outputFile, std::ios::binary);
    out << decodedData;
    out.close();
}

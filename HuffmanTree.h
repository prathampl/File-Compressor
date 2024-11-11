// HuffmanTree.h
#ifndef HUFFMANTREE_H
#define HUFFMANTREE_H

#include "HuffmanNode.h"
#include <unordered_map>
#include <queue>
#include <string>
#include <vector>

class HuffmanTree {
public:
    void buildTree(const std::string &data);
    std::string encode(const std::string &data);
    std::string decode(const std::string &encodedData);

private:
    void buildCodes(std::shared_ptr<HuffmanNode> node, const std::string &code);
    std::unordered_map<char, std::string> huffmanCodes;
    std::shared_ptr<HuffmanNode> root;
};

#endif // HUFFMANTREE_H

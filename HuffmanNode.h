// HuffmanNode.h
#ifndef HUFFMANNODE_H
#define HUFFMANNODE_H

#include <memory>

struct HuffmanNode {
    char data;
    int frequency;
    std::shared_ptr<HuffmanNode> left;
    std::shared_ptr<HuffmanNode> right;

    HuffmanNode(char d, int f) : data(d), frequency(f), left(nullptr), right(nullptr) {}

    // Custom comparator for priority queue
    struct Compare {
        bool operator()(const std::shared_ptr<HuffmanNode>& a, const std::shared_ptr<HuffmanNode>& b) {
            return a->frequency > b->frequency;
        }
    };
};

#endif // HUFFMANNODE_H

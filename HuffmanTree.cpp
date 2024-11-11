// HuffmanTree.cpp
#include "HuffmanTree.h"

void HuffmanTree::buildTree(const std::string &data) {
    std::unordered_map<char, int> frequencies;
    for (char ch : data) frequencies[ch]++;

    std::priority_queue<std::shared_ptr<HuffmanNode>, std::vector<std::shared_ptr<HuffmanNode>>, HuffmanNode::Compare> pq;

    for (const auto &pair : frequencies) {
        pq.push(std::make_shared<HuffmanNode>(pair.first, pair.second));
    }

    while (pq.size() > 1) {
        auto left = pq.top(); pq.pop();
        auto right = pq.top(); pq.pop();
        auto node = std::make_shared<HuffmanNode>('\0', left->frequency + right->frequency);
        node->left = left;
        node->right = right;
        pq.push(node);
    }
    root = pq.top();
    buildCodes(root, "");
}

void HuffmanTree::buildCodes(std::shared_ptr<HuffmanNode> node, const std::string &code) {
    if (!node) return;
    if (!node->left && !node->right) huffmanCodes[node->data] = code;
    buildCodes(node->left, code + "0");
    buildCodes(node->right, code + "1");
}

std::string HuffmanTree::encode(const std::string &data) {
    std::string encodedData;
    for (char ch : data) {
        encodedData += huffmanCodes[ch];
    }
    return encodedData;
}

std::string HuffmanTree::decode(const std::string &encodedData) {
    std::string decodedData;
    auto currentNode = root;
    for (char bit : encodedData) {
        currentNode = (bit == '0') ? currentNode->left : currentNode->right;
        if (!currentNode->left && !currentNode->right) {
            decodedData += currentNode->data;
            currentNode = root;
        }
    }
    return decodedData;
}

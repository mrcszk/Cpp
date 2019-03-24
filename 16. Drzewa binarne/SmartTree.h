//
// Created by marci on 21.03.2019.
//

#ifndef INC_16_DRZEWA_BINARNE_SMARTTREE_H
#define INC_16_DRZEWA_BINARNE_SMARTTREE_H
#include <iostream>
#include <ostream>
#include <string>
#include <memory>
namespace datastructures {

    struct SmartTree{
        int value = 0;
        std::unique_ptr<SmartTree> left = std::make_unique<SmartTree>();
        std::unique_ptr<SmartTree> right = std::make_unique<SmartTree>();
    };

    std::unique_ptr<SmartTree>CreateLeaf(int value);

    std::unique_ptr<SmartTree>
            InsertLeftChild(std::unique_ptr<SmartTree> tree, std::unique_ptr<SmartTree> left_subtree);

    std::unique_ptr<SmartTree>
            InsertRightChild(std::unique_ptr<SmartTree> tree, std::unique_ptr<SmartTree> right_subtree);

    void PrintTreeInOrder(const std::unique_ptr<SmartTree> &unique_ptr, std::ostream *out);

    std::string DumpTree(const std::unique_ptr<SmartTree> &tree);

    std::unique_ptr<SmartTree> RestoreTree(const std::string &tree);
}
#endif //INC_16_DRZEWA_BINARNE_SMARTTREE_H
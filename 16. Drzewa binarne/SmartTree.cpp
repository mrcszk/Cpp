//
// Created by marci on 21.03.2019.
//

#include "SmartTree.h"
#include <iostream>
#include <ostream>
#include <string>
#include <memory>
#include <regex>

namespace datastructures {

    std::unique_ptr<SmartTree> CreateLeaf(int value){
        SmartTree leaf = {value, nullptr, nullptr};
        auto newleaf = std::make_unique<SmartTree>(std::move(leaf));
        return newleaf;
    }

    std::unique_ptr<SmartTree>
    InsertLeftChild(std::unique_ptr<SmartTree> tree, std::unique_ptr<SmartTree> left_subtree){
        tree->left = move(left_subtree);
        return tree;
    }

    std::unique_ptr<SmartTree>
    InsertRightChild(std::unique_ptr<SmartTree> tree, std::unique_ptr<SmartTree> right_subtree){
        tree->right = move(right_subtree);
        return tree;
    }

    void PrintTreeInOrder(const std::unique_ptr<SmartTree> &unique_ptr, std::ostream *out){
        if (unique_ptr->left != nullptr){
            PrintTreeInOrder(unique_ptr->left, out);
        }
        (*out)<<unique_ptr->value<<", ";
        if (unique_ptr->right != nullptr){
            PrintTreeInOrder(unique_ptr->right, out);
        }
    }

    std::string DumpTree(const std::unique_ptr<SmartTree> &tree){
        std::string dump;
        //std::cout<<dump<<std::endl;
        dump+="[";
        dump+=std::to_string(tree->value);
        dump+=" ";
        if (tree->left != nullptr){
            dump+=DumpTree(tree->left);
        }
        else{
            dump+="[-]";
        }
        dump+=" ";
        if (tree->right != nullptr){
            dump+=DumpTree(tree->right);
        }
        else{
            dump+="[-]";
        }
        dump+="]";
        return dump;
    }

    std::unique_ptr<SmartTree> RestoreTree(const std::string &tree) {
        if (tree == "[-]") {
            return nullptr;
        }
        int iterator = 1;
        std::string value;
        unsigned long stringsize = tree.length();

        while (iterator < stringsize){
            if (tree[iterator]==' '){
                value=tree.substr(1, iterator);
                iterator++;
                break;
            }
            iterator++;
        }
        //left child
        int bracketscounter = 0;
        int leftstart = iterator;
        std::string leftchild;
        while (iterator < stringsize){
            if (tree[iterator]=='['){
                bracketscounter+=1;
            }
            else if (tree[iterator]==']'){
                bracketscounter-=1;
            }
            if (bracketscounter==0){
                leftchild = tree.substr(leftstart, iterator-leftstart+1);
                iterator+=2;
                break;
            }
            iterator++;
        }

        //right child
        bracketscounter = 0;
        int rightstart = iterator;
        std::string rightchild;
        while (iterator < stringsize){
            if (tree[iterator]=='['){
                bracketscounter+=1;
            }
            else if (tree[iterator]==']'){
                bracketscounter-=1;
            }
            if (bracketscounter==0){
                rightchild = tree.substr(rightstart, iterator-rightstart+1);
                iterator++;
                break;
            }
            iterator++;
        }


        auto root = CreateLeaf(std::stoi(value));
        root->left = RestoreTree(leftchild);
        root->right = RestoreTree(rightchild);
        return root;
    }


}
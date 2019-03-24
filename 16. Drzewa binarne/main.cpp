#include "SmartTree.h"
#include <iostream>
#include <ostream>
#include <string>
#include <memory>
#include <regex>
using namespace std;
using namespace datastructures;

int main(){
    unique_ptr<SmartTree> root;
    unique_ptr<SmartTree> root2;
    root = CreateLeaf(79);
    root = InsertLeftChild(move(root), CreateLeaf(67));
    root = InsertRightChild(move(root), CreateLeaf(342));
    root->left = InsertLeftChild(move(root->left), CreateLeaf(879));
    root->left = InsertRightChild(move(root->left), CreateLeaf(879));
    root->right = InsertLeftChild(move(root->right), CreateLeaf(5646));
    root->right = InsertRightChild(move(root->right), CreateLeaf(756));
    cout<<DumpTree(root)<<endl;
    cout<<DumpTree(RestoreTree(DumpTree(root)))<<endl;
}
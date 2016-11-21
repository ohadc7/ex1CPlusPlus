//
// Created by ohad on 18/11/16.
//

#include <iostream>
#include "BinaryTree.h"
using namespace std;


BinaryTree::BinaryTree(int number, int depthC,
                       BinaryTree *binaryTreeLeft, BinaryTree *binaryTreeRight)
        : binaryTreeLeft(binaryTreeLeft), binaryTreeRight(binaryTreeRight) {
    numInTree = number;
    depth = depthC;
}

BinaryTree* BinaryTree::getBinaryTreeLeft() const{
    return binaryTreeLeft;
}
BinaryTree* BinaryTree::getBinaryTreeRight() const{
    return binaryTreeRight;
}
void BinaryTree::setBinaryTreeLeft(BinaryTree *binaryTreeLeftP){
    binaryTreeLeft = binaryTreeLeftP;
}
void BinaryTree::setBinaryTreeRight(BinaryTree *binaryTreeRightP){
    binaryTreeRight = binaryTreeRightP;
}
int BinaryTree::getDepth() const{
    return depth;
}
int BinaryTree::getNum() const{
    return numInTree;
}

BinaryTree::~BinaryTree() {
    delete binaryTreeRight;
    delete binaryTreeLeft;
}

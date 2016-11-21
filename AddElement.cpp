//
// Created by ohad on 18/11/16.
//

#include "AddElement.h"
#include "BinaryTree.h"
#include <iostream>
using namespace std;

 AddElement::AddElement(long depth) {
     depthC = depth;
 }

void AddElement::addElement(BinaryTree *binaryTree) {
    if ((*binaryTree).getDepth() < depthC) {
        if (binaryTree->getBinaryTreeLeft() == NULL) {
            binaryTree->setBinaryTreeLeft(new BinaryTree(2, binaryTree->getDepth() + 1,NULL,NULL));
            addElement(binaryTree->getBinaryTreeLeft());
        }
        if (binaryTree->getBinaryTreeRight() == NULL) {
            binaryTree->setBinaryTreeRight(new BinaryTree(2, binaryTree->getDepth() + 1,NULL,NULL));
            addElement(binaryTree->getBinaryTreeRight());
        }
    }
}

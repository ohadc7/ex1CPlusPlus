#include <iostream>
#include <cmath>
#include <stdlib.h>
#include "AddElement.h"
#include "BinaryTree.h"
using namespace std;

int main(int argc, char* argv[]) {
    long depth = (long)log2(atoi(argv[1]));
    AddElement createTree = AddElement(depth);
    BinaryTree *root = new BinaryTree(1, 0, NULL, NULL);
    createTree.addElement(root);
    delete root;
    return 0;
}
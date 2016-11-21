

#ifndef EX1C_ADDELEMENT_H
#define EX1C_ADDELEMENT_H


#include "BinaryTree.h"

class AddElement {
private:
    long depthC;
public:
    AddElement(long depth);
    void addElement(BinaryTree *binaryTree);
};

#endif //EX1C_ADDELEMENT_H

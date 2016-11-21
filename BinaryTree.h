//
// Created by ohad on 18/11/16.
//

#ifndef EX1C_BINARYTREE_H
#define EX1C_BINARYTREE_H


class BinaryTree {
private:
    BinaryTree *binaryTreeLeft;
    BinaryTree *binaryTreeRight;
    int depth;
    int numInTree;
public:
    BinaryTree(int num, int depth, BinaryTree *binaryTreeLeft, BinaryTree *binaryTreeRight);
    ~BinaryTree();
    BinaryTree *getBinaryTreeLeft() const;
    BinaryTree *getBinaryTreeRight() const;
    void setBinaryTreeLeft(BinaryTree *binaryTreeLeftP);
    void setBinaryTreeRight(BinaryTree *binaryTreeRightP);
    int getDepth() const;
    int getNum() const;
};


#endif //EX1C_BINARYTREE_H

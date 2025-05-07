//
// Created by user on 30.04.2025.
//

#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H
#include "barat.h"

typedef struct NodeTree{
    int info;
    struct NodeTree *left, *right;
}NodeTree;

NodeTree *createNewNode(int newData);
NodeTree *insertLeft(NodeTree *root, int newData);
NodeTree *insertRight(NodeTree *root, int newData);
void preorderTraversal(NodeTree *root);
void inorderTraversal(NodeTree *root);
void postorderTraversal(NodeTree *root);
void destroyBinaryTree(NodeTree **root);

#endif //BINARYSEARCHTREE_H

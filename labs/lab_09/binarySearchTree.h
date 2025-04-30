//
// Created by user on 30.04.2025.
//

#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H
#include "barat.h"

typedef struct TreeNode{
    Barat data;
    struct TreeNode* left;
    struct TreeNode* right;
}TreeNode;

void *newNode_BST(Barat data);
void *insert_BST(TreeNode *node, Barat key);
void inorderTraversal_BST(TreeNode *root);
void *minValueNode(TreeNode *node);
void *maxValueNode(TreeNode *node);
void *deleteNode(TreeNode *root, Barat key);


#endif //BINARYSEARCHTREE_H

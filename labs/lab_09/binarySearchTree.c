//
// Created by user on 30.04.2025.
//

#include "binarySearchTree.h"
#include <stdlib.h>

void * newNode_BST(Barat data) {
    TreeNode *node = (TreeNode*)malloc(sizeof(TreeNode));
    if(!node) {
        exit(-1);
    }
    node->data = data;
    node->left = NULL;
    node->right= NULL;
    return node;
}

void * insert_BST(TreeNode *node, Barat key) {
    if (node == NULL) {
        return newNode_BST(key);
    }
    if (key < node->data) {
        node->left = insert_BST(node->left, key);
    }

    return node;
}

void inorderTraversal_BST(TreeNode *root) {
}

void * minValueNode(TreeNode *node) {
}

void * maxValueNode(TreeNode *node) {
}

void * deleteNode(TreeNode *root, Barat key) {
}

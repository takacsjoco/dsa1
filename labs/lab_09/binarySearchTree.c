//
// Created by user on 30.04.2025.
//

#include "binarySearchTree.h"

#include <stdio.h>
#include <stdlib.h>

NodeTree *createNewNode(int newData) {
    NodeTree *newItem = (NodeTree*) malloc(sizeof (NodeTree));

    newItem->info = newData;
    newItem->left = newItem->right = NULL ;
    return newItem;
}

NodeTree *insertLeft(NodeTree *root, int newData) {
    root->left = createNewNode(newData);
    return root->left;
}

NodeTree *insertRight(NodeTree *root, int newData) {
    root->right= createNewNode(newData);
    return root->right;
}

void inorderTraversal(NodeTree *root) {
    if(root == NULL) return;
    inorderTraversal(root->left);
    printf("%d ", root->info);
    inorderTraversal(root->right);
}

void destroyBinaryTree(NodeTree **root) {
    if ((*root) != NULL) {
        destroyBinaryTree(&(*root)->left);
        destroyBinaryTree(&(*root)->right);
        free(*root);
        *root = NULL;
    }
}
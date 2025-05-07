//
// Created by user on 30.04.2025.
//

#include "binarySearchTree.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

NodeTree *createNewNode(Barat newData) {
    NodeTree *newItem = (NodeTree*) malloc(sizeof (NodeTree));

    newItem->data = newData;
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
    printf("%d ", root->data);
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

NodeTree* createNewTreeNode(Barat newData) {
    NodeTree *newNode = (NodeTree*) malloc(sizeof(NodeTree));
    newNode->data = newData;
    newNode->left = newNode->right = NULL;
    return newNode;
}

NodeTree* insertByName(NodeTree *root, Barat newData) {
    if (root == NULL) {
        return createNewTreeNode(newData);
    }
    if (strcmp(newData.nev, root->data.nev) < 0) {
        root->left = insertByName(root->left, newData);
    } else {
        root->right = insertByName(root->right, newData);
    }
    return root;
}

void inorderPrintByName(NodeTree *root) {
    if (root == NULL) return;
    inorderPrintByName(root->left);
    printf("%s; %d; %d; %d; %c; %d\n",
        root->data.nev,
        root->data.szuletesiDatum.ev,
        root->data.szuletesiDatum.honap,
        root->data.szuletesiDatum.nap,
        root->data.nem,
        root->data.bulizas);
    inorderPrintByName(root->right);
}

//
// Created by user on 14.05.2025.
//

#include "bst.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Node *createNewNode(Konyv newData) {
    Node *newItem = (Node *) malloc(sizeof(Node));
    if (!newItem) {
        printf("MEMORY_ALLOCATION_ERROR_MESSAGE");
        exit("MEMORY_ALLOCATION_ERROR_CODE");
    }
    newItem->info = newData;
    newItem->left = newItem->right = NULL;
    return newItem;
}

Node *insert(Node *node, Konyv key) {
    if(node == NULL)
    {
        return createNewNode(key);
    }
    if(strcmp(node->info.cim, key.cim) < 0)
    {
        node->right = insert(node->right, key);
    }
    else
    {
        node->left = insert(node->left, key);
    }
    return node;
}

void inorderTraversal(Node *root) {
    if (root == NULL) return;
    inorderTraversal(root->left);
    printf("%s\n ", root->info.cim);
    inorderTraversal(root->right);
}

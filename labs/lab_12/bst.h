//
// Created by palma on 5/5/2023.
//

#ifndef BINARYSEARCHTREE_BINARY_SEARCH_TREE_H
#define BINARYSEARCHTREE_BINARY_SEARCH_TREE_H
#include "konyv.h"


typedef struct Node{
    Konyv info;
    struct Node *left, *right;
}Node;

/**
 * Allocate memory for a new node
 * @param newData
 * @return the allocated node item
 */
Node *createNewNode(Konyv newData);

/**
 * Insert new node
 * @param node
 * @param key
 * @return the inserted node
 */
Node * insert(Node *node, Konyv key);
/**
 * LEFT-ROOT-RIGHT order of traversal
 * @param root
 */
void inorderTraversal(Node *root);
/**
 * Find the min element
 * @param node
 * @return pointer to the min element
 */
Node * minValueNode(Node *node);
/**
 * Find the max element
 * @param node
 * @return pointer to the max element
 */
Node * maxValueNode(Node *node);
/**
 * Delete a specific node
 * @param root
 * @param key
 * @return the new node
 */
Node *deleteNode(Node *root, int key);
/**
 * Deallocate memory
 * @param root
 */
void destroyBinaryTree(Node **root);


#endif //BINARYSEARCHTREE_BINARY_SEARCH_TREE_H

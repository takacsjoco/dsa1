//
// Created by user on 30.04.2025.
//

#ifndef LIST_H
#define LIST_H
#include "barat.h"
#include <stdbool.h>

typedef struct Node{
    Barat data;
    struct Node* next;
}Node;

/**
* Allocates memory for a new node
* @param new_data
* @return pointer to a new allocated node
*/
Node* newNode(Barat new_data);

/**
* Checks if list is empty, head is NULL pointer
* @param head
* @return true/false
*/
bool isEmpty(Node *head);


/**
* Insertg new node at the end of the list
* @param head_ref
* @param new_data
*/
void insertAtEnd(Node** head_ref, Barat new_data);


/**
* Delete a specific node
* @param head_ref
* @param key
*/
void deleteNode(Node** head_ref, int key);

/**
* Print all elements of teh list
* @param node
*/
void printList(Node* node);

void destroyList(Node **head_ref);

#endif //LIST_H

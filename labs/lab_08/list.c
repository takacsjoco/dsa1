//
// Created by user on 16.04.2025.
//

#include "list.h"
#include <stdlib.h>
#include <malloc.h>
#include <stdio.h>

Node * newNode(int new_data) {
    Node *node = (Node*)malloc(sizeof(Node));
    if(!node) {
        exit(-1);
    }
    node->data = new_data;
    node->next = NULL;
    return node;
}

void insertAtBeginning(Node **head_ref, int new_data) {
    Node *new_node = newNode(new_data);
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void insertAfter(Node *prev_ref, int new_data) {
    Node *temp = prev_ref->next;
    Node *new_node = newNode(new_data);
    prev_ref->next = new_node;
    new_node->next = temp;
}

void insertAtEnd(Node **head_ref, int new_data) {
    if (*head_ref==NULL) {
        insertAtBeginning(head_ref, new_data);
    }
    else {
        Node *new_node = newNode(new_data);
        Node *temp = *head_ref;
        while (temp->next!=NULL) {
            temp=temp->next;
        }
        temp->next=new_node;
    }
}

void deleteFromBeginning(Node **head_ref) {
    
}


void printList(Node *node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

void destroyList(Node **head_ref) {
    while (*head_ref == NULL) {
        Node *temp = *head_ref;
        *head_ref = (*head_ref)->next;
        free(temp);
    }
    head_ref = NULL;
}

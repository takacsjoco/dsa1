//
// Created by user on 30.04.2025.
//

#include "list.h"

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

Node * newNode(Barat new_data) {
    Node *node = (Node*)malloc(sizeof(Node));
    if(!node) {
        exit(-1);
    }
    node->data = new_data;
    node->next = NULL;
    return node;
}

void insertAtBeginning(Node **head_ref, Barat new_data) {
    Node *new_node = newNode(new_data);
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void insertAfter(Node *prev_ref, Barat new_data) {
    Node *temp = prev_ref->next;
    Node *new_node = newNode(new_data);
    prev_ref->next = new_node;
    new_node->next = temp;
}

void insertAtEnd(Node **head_ref, Barat new_data) {
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
        printf("%s %i %c %i %i %i -> ", node->data.nev, node->data.bulizas, node->data.nem, node->data.szuletesiDatum.ev, node->data.szuletesiDatum.honap, node->data.szuletesiDatum.nap);
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

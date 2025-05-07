//
// Created by user on 30.04.2025.
//

#include "list.h"
#include <stdlib.h>
#include <stdio.h>

Node *newNode(Barat data) {
    Node *node = (Node *)malloc(sizeof(Node));
    if (!node) {
        exit (-1);
    }
    node->data = data;
    node->next=NULL;
    return node;
}

void insertAfter(Node* prev_ref, Barat new_data) {
    Node *temp = prev_ref->next;
    Node *new_node = newNode(new_data);
    prev_ref->next=new_node;
    new_node->next=temp;

}

void printList(Node* node) {
    while (node!=NULL) {
        printf("%s; %d; %d; %d; %c; %d  ", node->data.nev, node->data.szuletesiDatum.ev, node->data.szuletesiDatum.honap, node->data.szuletesiDatum.nap, node->data.nem, node->data.bulizas);
        printf("\n");
        node = node->next;
    }
}

void insertAtBeginning(Node** head_ref, Barat new_data) {
    Node *new_node = newNode(new_data);
    new_node->next=*head_ref;
    *head_ref=new_node;
}

void insertAtEnd(Node** head_ref, Barat new_data) {
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
    if (*head_ref==NULL) {
    }
    Node *temp = *head_ref;
    *head_ref=temp->next;
    free(temp);
}

void destroyList(Node **head_ref) {
    while (*head_ref==NULL) {
        Node *temp = *head_ref;
        *head_ref=(*head_ref)->next;
        free(temp);
    }
    head_ref=NULL;
}

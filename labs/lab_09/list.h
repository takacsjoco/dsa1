//
// Created by user on 30.04.2025.
//

//
// Created by timig on 4/30/2025.
//

#ifndef FRIEND_H
#define FRIEND_H

typedef struct Datum {
    int ev;
    int honap;
    int nap;
} Datum;

typedef struct Barat {
    char nev[100];
    Datum szuletesiDatum;
    char nem;
    int bulizas;
} Barat;

typedef struct Node{
    Barat data;
    struct Node* next;
}Node;

Node* newNode(Barat new_data);
bool isEmpty(Node *head);
void insertAtBeginning(Node** head_ref, Barat new_data);
void insertAfter(Node* prev_ref, Barat new_data);
void insertAtEnd(Node** head_ref, Barat new_data);
void deleteFromBeginning(Node** head_ref);
void deleteFromEnd(Node** head_ref);
void deleteNode(Node** head_ref, int key);
bool searchNode(Node* head_ref, int key);
void sortLinkedList(Node** head_ref);
void printList(Node* node);
void destroyList(Node **head_ref);



#endif //FRIEND_H
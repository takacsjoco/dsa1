//
// Created by user on 08.04.2025.
//

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef enum {
    SPAGHETTI,
    PENNE,
    FUSILLI,
    TAGLIATELLE,
    MACARONI,
    OTHER
}Type;
typedef struct {
    char name[30];
    float quantity;
    Type type;
    bool glutenfree;
}Pasta_t;

typedef struct{
    int capacity;
    int front;
    int rear;
    Pasta_t *elements;
}Queue;
char *getDescriptionType(Type type);
void readOnePasta(Pasta_t *pasta);
void printOnePasta(Pasta_t pasta);
void createQueueCirc(int capacity,Queue *queue);
void destroyQueueCirc(Queue *queue);
bool isEmptyCirc(Queue queue);
bool isFullCirc(Queue queue);
Pasta_t dequeueCQ(Queue *pasta);
void enqueueCirc(Queue *pasta, Pasta_t pastat);
void displayCircQueue(Queue pasta);
void separateByGluten(Queue *sourceTray,Queue *glutenFreeTray,Queue);
void compareTraySizes(Queue glutenFreeTray,Queue GlutenTray);


#endif //FUNCTIONS_H

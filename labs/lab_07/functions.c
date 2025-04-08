//
// Created by user on 08.04.2025.
//

#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

/*char name[30];
float quantity;
Type type;
bool glutenfree;
SPAGHETTI,
    PENNE,
    FUSILLI,
    TAGLIATELLE,
    MACARONI,*/
char *getDescriptionType(Type type) {
 switch (type) {
  case 0: return "SPAGHETTI";
  case 1: return "PENNE";
  case 2: return "FUSILI";
  case 3: return "TAGLIATELLE";
  case 4: return "MACARONI";
  default: return "OTHER";
 }
}
void readOnePasta(Pasta_t *pasta) {
 scanf("\n%[^\n]",pasta->name);
 scanf("%.2f",&pasta->quantity);
 scanf("%d",&pasta->type);
 scanf("%i",&pasta->glutenfree);
}
void printOnePasta(Pasta_t pasta) {
 printf("%s %.2f %s %i\n",pasta.name,pasta.quantity,getDescriptionType(pasta.type),pasta.glutenfree);
}
void createQueueCirc(int capacity, Queue *queue) {
 queue->capacity = capacity;
 queue->front = queue->rear = -1;
 queue->elements = (Queue*)calloc(20, sizeof(Queue));
 if(!queue->elements){
  printf("Memory allocation failed!");
  exit(-1);
 }
}
bool isEmptyCirc(Queue queue) {
 return queue.rear == -1;
}
bool isFullCirc(Queue queue) {
 return queue.front == 0 && queue.rear == queue.capacity-1 ||
 queue.rear==queue.front-1;
}
Pasta_t dequeueCQ(Queue *pasta) {
 if(isEmptyCirc(*pasta)) {
  printf("CQ is empty");
  exit(-3);
 }
 Pasta_t result;
 result = pasta->elements[pasta->front];
 if(pasta->front == pasta->rear){
  pasta->front = -1;
  pasta->rear = -1;
 }
 else
 {
  pasta->front = (pasta->front ++) % pasta->capacity;
 }
 return result;
}
void enqueueCirc(Queue *pasta, Pasta_t pastat) {
 if (isFullCirc(*pasta)) {
  printf("Tray is full. Cannot enqueue more items.\n");
  return;
 }
 if (isEmptyCirc(*pasta)) {
  pasta->front = 0;
 }
 pasta->rear = (pasta->rear + 1) % pasta->capacity;
 pasta->elements[pasta->rear]=pastat;
}
void displayCircQueue(Queue pasta)
{
 int i = pasta.front;
 do
 {
  printOnePasta(pasta.elements[i]);
  i = (i + 1) % pasta.capacity;
 }while(i != pasta.rear);
 printOnePasta(pasta.elements[pasta.rear]);
}

void separateByGluten(Queue *sourceTray,Queue *glutenFreeTray,Queue) {
 int Gluten=0;
 int nonGluten=0;
 if(sourceTray->elements->glutenfree==1) {
  nonGluten++;
 }else{Gluten++;}
 glutenFreeTray->elements=nonGluten;

}

void compareTraySizes(Queue glutenFreeTray,Queue GlutenTray) {
 if(glutenFreeTray.elements==GlutenTray.elements) {
  printf("\nThe trays are of equal size");
 }
 if(glutenFreeTray.elements>GlutenTray.elements) {
  printf("\nThere are more foods that contain gluten \n");
 }
 if(glutenFreeTray.elements<GlutenTray.elements) {
  printf("\nThere are more non gluten foods\n");
 }
}




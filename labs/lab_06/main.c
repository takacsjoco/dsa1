#include <stdio.h>
#include <stdlib.h>

#include "cmake-build-debug/simple_queue.h"

int main(void) {

    Simple_Queue_t carQueue;
    createQueue(5, &carQueue);
    bool ok = true;
    while(ok) {
        printf("Choose from the options below:\n");
        printf("To check if the queue is empty press: 1 \n");
        printf("To check if the queue is full press: 2 \n");
        printf("To add a new car to the queue press: 3 \n");
        printf("To remove a car from the queue press: 4 \n");
        printf("To display the cars in the queue press: 5 \n");
        printf("To exit press: 0 \n");

        int option;
        scanf("%i", &option);
        switch(option) {
            case 1: if(isEmpty(carQueue)) {
                printf("Queue is empty\n");
            }
            else {
                printf("Queue is not empty\n");
            }
            break;

            case 2: if(isFull(carQueue)) {
                printf("Queue is full\n");
            }
            else {
                printf("Queue is not full\n");
            }
            break;

            case 3: enqueue(&carQueue);
            break;

            case 4: dequeue(&carQueue);
            break;

            case 5: display(carQueue);
            break;

            case 0: exit(0);
            break;
        }
    }


    return 0;
}

//
// Created by z on 3/10/25.
//

#include <string.h>
#include <printf.h>
#include <stdlib.h>
#include "function.h"

///Extra feladat 4. het

/*int balancedStringSplit(char *s) {
        int balance=0;
        int count=0;
        for(int i=0;i<strlen(s);i++){
            if(s[i]=='R'){
                balance++;
            }
            else if(s[i]=='L'){
                balance--;
            }
            if(balance==0)
                count++;
        }
        return count;
    }*/

///Extra feladat 5. het

/*bool checkValidString(char *s) {
    int left_min = 0, left_max = 0;
    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] == '(')
            left_min++, left_max++;
        else if (s[i] == ')')
            left_min--, left_max--;
        else
            left_min--, left_max++;
        if (left_max < 0)
            return false;
        if (left_min < 0)
            left_min = 0;
    }
    return left_min == 0;
}*/

///Extra feladat 6. het


int compare(const void *a, const void *b) {
    int* personA = (int*)a;
    int* personB = (int*)b;
    if (personA[0] != personB[0]) {
        return personB[0] - personA[0];
    }
    return personA[1] - personB[1];
}

int **reconstructQueue(int **people, int peopleSize, int *peopleColSize, int *returnSize, int **returnColumnSizes) {
    qsort(people, peopleSize, sizeof(int*), compare);
    int** queue = (int**)malloc(sizeof(int*) * peopleSize);
    *returnColumnSizes = (int*)malloc(sizeof(int) * peopleSize);

    for (int i = 0; i < peopleSize; i++) {
        int height = people[i][0];
        int k = people[i][1];
        for (int j = peopleSize - 1; j > k; j--) {
            queue[j] = queue[j - 1];
        }
        queue[k] = (int*)malloc(sizeof(int) * 2);
        queue[k][0] = height;
        queue[k][1] = k;
    }
    *returnSize = peopleSize;
    return queue;
}

void printQueue(int **queue, int queueSize) {
    for (int i = 0; i < queueSize; i++) {
        printf("[%d, %d] ", queue[i][0], queue[i][1]);
    }
    printf("\n");
}



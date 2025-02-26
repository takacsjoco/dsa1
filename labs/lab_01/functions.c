//
// Created by z on 2/26/25.
//

#include "functions.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "functions.h"

//definiciok

int sum(int number1, int number2) {
    return number1 + number2;
}

float minimum(float number1, float number2, float number3) {
    float min = number1;
    if(min > number2)
    {
        min = number2;
    }
    if(min > number3)
    {
        min = number3;
    }
    return min;
}

void fillWithRandomNumbers(int n, float *pArray, float start, float end) {
    srand(time(0));
    for (int i = 0; i < n; ++i)
    {
        pArray[i] = (rand()/(float) RAND_MAX) * (end - start) + start;
    }
}

void printArray(int n, float *pArray, const char *output) {
    freopen(output, "w", stdout);
    for (int i = 0; i < n; ++i)
    {
        printf("%.2f ", pArray[i]);
    }
    freopen("CON", "w", stdout);

}

float *allocateMemoryForArray1(int n) {
    float *p = (float*)malloc(n * sizeof (float));
    if(p == NULL)
    {
        printf("ALLOCATION ERROR\n");
        exit(-1);
    }
    return p;
}

void deallocateMemoryForArray(float **dpArray) {
    free(*dpArray);
    *dpArray = NULL;
}

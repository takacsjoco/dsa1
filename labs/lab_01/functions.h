//
// Created by z on 2/26/25.
//

#ifndef LABS_FUNCTIONS_H
#define LABS_FUNCTIONS_H

//deklaraciok

int sum(int number1, int number2);

float minimum(float number1, float number2, float number3);

void fillWithRandomNumbers(int n, float *pArray, float start,float end);

void printArray(int n, float *pArray, const char *output);

float* allocateMemoryForArray1(int n);

void deallocateMemoryForArray(float **dpArray);

#endif //LABS_FUNCTIONS_H

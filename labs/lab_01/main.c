#include <stdio.h>
#include "functions.h"

///Bevezetes


int main(void) {
    int num1, num2;

    printf("Adj meg 2 szamot:");
    scanf("%d%d", &num1, &num2);
    printf("Az osszeg: %d\n", sum(num1, num2));
    printf("\n");

    //printf("minimum: %f\n", minimum(4.5, 7.6, 2.3));

    int n;
    printf("Add meg a tomb meretet: ");
    scanf("%d", &n);
    do
    {

    }
    while (n < 3 || n % 2 == 0);



    float *array = allocateMemoryForArray1(n);
    fillWithRandomNumbers(n, array, 0, 1);
    printArray(n, array, "ki.txt");
    printf("A legkisebb elem a 3 kozul: %f\n", minimum(array[0],array[n-1], array[n/2]));
    deallocateMemoryForArray(&array);

    return 0;
}



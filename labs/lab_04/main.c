#include <stdio.h>
#include "array.h"

int main(void) {
    IntArray array;
    createIntArray(10, &array);
    printArray(array);
    insertLast(&array, 4);
    printArray(array);
    printf("\n");
    int i = 0;
    while (array.size < array.capacity/2) {
        insertLast(&array, i + 1);
        i++;
    }
    printArray(array);
    insertAt(&array, 3, 8);
    printf("\n");
    printArray(array);
    deleteItemAt(&array, 3);
    printArray(array);
    while (array.size < array.capacity) {
        if (i%2 != 0)
            insertLast(&array, i + 1);
        else
            insertFirst(&array, i + 1);
        i++;
    }
    return 0;
}

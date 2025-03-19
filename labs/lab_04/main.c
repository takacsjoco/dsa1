#include <stdio.h>
#include "cmake-build-debug/array.h"

int main(void) {
    IntArray array;
    createIntArray(10, &array);
    printArray(array);
    isEmpty(array);
    isFull(array);
    insertLast(&array, 5 );
    insertFirst(&array, 1 );




    deallocateIntArray(&array);
    return 0;
}

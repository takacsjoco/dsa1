#include <stdio.h>
#include "cmake-build-debug/stack.h"
#include "cmake-build-debug/constants.h"
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
    Stack stack;
    createStack(10, &stack);
    srand(time(NULL));
    while (!isFull(stack)){
        int randomNum = rand() % 100;
        push(&stack, randomNum);
    }

    return 0;
}
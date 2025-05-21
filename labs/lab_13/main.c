
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "hash.h"

int main() {
    HashTable table;
    createHashArray(&table);
    display(table);
    Diak d1 = {"A0M7X9", 7.23};
    Diak d2 = {"AOQPZY", 7.77};
    Diak d3 = {"AQ2KRZ", 6.24};
    insert(&table, "A0M7X9", d1 );
    insert(&table, "AOQPZY", d2 );
    insert(&table, "AQ2KRZ", d3 );
    display(table);


    destroyHashArray(&table);
    return 0;
}

//
// Created by user on 21.05.2025.
//

#include "hash.h"
#include "constants.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hashCode(char key [10]) {
    int result = 0;
    for (int i = 0; i < strlen(key); i++) {
        result += key[i];
    }
    return result % CAPACITY;
}

HashItem createHashItem(char key [10], Diak data)
{
    HashItem item;
    strcpy(item.key, key);
    item.data = data;
    return item;
}
void createHashArray(HashTable *pHashTable) {
    pHashTable->items = (HashItem*)calloc(CAPACITY, sizeof(HashItem));
    if(!pHashTable->items)
    {
        printf(MEMORY_ALLOCATION_ERROR_MESSAGE);
        exit(MEMORY_ALLOCATION_ERROR_CODE);
    }
    for (int i = 0; i < CAPACITY; ++i) {
        pHashTable->items[i] = dummyData;
    }
    pHashTable->size = 0;
}

void insert(HashTable *hashTable, char key [10], Diak data) {
    if(hashTable->size >= CAPACITY) return;
    int index = hashCode(key);
    int i = 0;
    while (strcmp(hashTable->items[(index + i)%CAPACITY].key, dummyData.key) !=0)
    {
        i++;
        if (i == CAPACITY)
        {
          return;
        }//Table full
    }
    hashTable->items[(index+i)%CAPACITY] = createHashItem(key, data);
    hashTable->size++;
}

void display(HashTable hashTable) {
    if(hashTable.size == 0) {
        printf("The table is empty\n");
        return;
    }
    printf("The hash table:\n\tpos\t:\tkey\tvalue\t->\tmod\n");
    for (int i = 0; i < CAPACITY; ++i) {
        if(strcmp(hashTable.items[i].key, dummyData.key) !=0)
        {
            printf("\t%i\t:\t%s\t%f\t->\t%i\n", i, hashTable.items[i].key, hashTable.items[i].data.jegy, hashCode(hashTable.items[i].key));
        }
    }
}

int size(HashTable hashTable) {
    return hashTable.size;
}

void delete(HashTable *hashTable, char key [10]) {
    int index = hashCode(key);
    if (strcmp(hashTable->items[index].key, dummyData.key) ==0)
    {
        printf("\n This key does not exist \n");
        return;
    }
    int i = 0;
    while(strcmp(hashTable->items[(index+i)%CAPACITY].key, key && i < CAPACITY) !=0)
    {
        i++;
    }
    if(i == CAPACITY)
    {
        printf("\n This key does not exist \n");
        return;
    }
    hashTable->items[(index+i)%CAPACITY] = dummyData;
    hashTable->size--;
    printf("\n Key (%s) has been removed \n", key);
}

int search(HashTable hashTable, char key [10]) {
    int index = hashCode(key);
    if (strcmp (hashTable.items[index].key, dummyData.key) ==0)
    {
        return -1;
    }
    int i = 0;
    while(strcmp(hashTable.items[(index+i)%CAPACITY].key, key && i < CAPACITY)!=0)
    {
        i++;
    }
    if(i == CAPACITY) return -1;
    return (index + i) % CAPACITY;
}

void destroyHashArray(HashTable *pHashTable) {
    free(pHashTable->items);
    pHashTable->items = NULL;
    pHashTable->size = 0;
}
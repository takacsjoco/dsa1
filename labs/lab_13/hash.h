//
// Created by user on 21.05.2025.
//

#ifndef HASH_H
#define HASH_H
#define CAPACITY 89

typedef struct {
    char neptun [10];
    float jegy;
}Diak;

typedef struct {
    char key [10];
    Diak data;
} HashItem;

typedef struct {
    HashItem *items;
    int size;
}HashTable;

static HashItem dummyData = {"SENKI", {}};
/**
 * Allocates memory for a hash table with defined SIZE
 * @param pHashTable
 */
void createHashArray(HashTable *pHashTable);
//This should be only accessible in the .c file
//int hashCode(int key);
/**
 * Inserts a new data to the hashArray
 * @param hashTable
 * @param key
 * @param data
 */
void insert(HashTable *hashTable, char key [10], Diak data);
/**
 * Deletes a data from the array
 * @param hashTable
 * @param key
 * @param data
 */
void delete(HashTable *hashTable, char key [10]);
/**
 * Searches for a specific data with the given key
 * @param hashTable
 * @param key
 * @return the position if it is present, -1 otherwise
 */
int search(HashTable hashTable, char key [10]);
/**
 * Prints the content of the array to the standard input
 * @param hashTable
 */
void display(HashTable hashTable);

/**
 * Returns the number of elements present in the hashtable
 * @param hashTable
 * @return size
 */
int size(HashTable hashTable);
/**
 * Deallocates memory
 * @param pHashTable
 */
void destroyHashArray(HashTable *pHashTable);

#endif //HASH_H

#include <stdio.h>
#define SIZE 10 // Define the size of the hash table
struct DataItem {
    int key;
};
struct DataItem *hashArray[SIZE]; // Define the hash table as an array of DataItem pointers
int hashCode(int key) {
    // Return a hash value based on the key
    return key % SIZE;
}
struct DataItem *search(int key) {
    // get the hash
    int hashIndex = hashCode(key);

    // move in array until an empty slot is found or the key is found
    while (hashArray[hashIndex] != NULL) {
        // If the key is found, return the corresponding DataItem pointer
        if (hashArray[hashIndex]->key == key)
            return hashArray[hashIndex];

        // go to the next cell
        ++hashIndex;

        // wrap around the table
        hashIndex %= SIZE;
    }
    // If the key is not found, return NULL
    return NULL;
}

int main() {

    // Initializing the hash table with some sample DataItems
    struct DataItem item2 = {25}; // Assuming the key is 25
    struct DataItem item3 = {64}; // Assuming the key is 64
    struct DataItem item4 = {22}; // Assuming the key is 22

    // Calculate the hash index for each item and place them in the hash table

    int hashIndex2 = hashCode(item2.key);
    hashArray[hashIndex2] = &item2;
    
    int hashIndex3 = hashCode(item3.key);
    hashArray[hashIndex3] = &item3;

    int hashIndex4 = hashCode(item4.key);
    hashArray[hashIndex4] = &item4;

    // Call the search function to test it
    int keyToSearch = 64; // The key to search for in the hash table
    struct DataItem *result = search(keyToSearch);
    printf("The element to be searched: %d", keyToSearch);
    if (result != NULL) {
        printf("\nElement found");
    } else {
        printf("\nElement not found");
    }

    return 0;
}
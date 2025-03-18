#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 10

typedef struct Node {
    int key;
    char* value;
    struct Node* next;
} Node;

typedef struct HashTable {
    Node** table;
} HashTable;

// Function prototypes
HashTable* create_table();
int hash_function_division(int key);
int hash_function_multiplication(int key);
void insert(HashTable* ht, int key, char* value, int method);
char* get(HashTable* ht, int key, int method);
void display(HashTable* ht);
void free_table(HashTable* ht);

// Create a new hash table
HashTable* create_table() {
    HashTable* ht = malloc(sizeof(HashTable));
    ht->table = malloc(sizeof(Node*) * TABLE_SIZE);
    for (int i = 0; i < TABLE_SIZE; i++) {
        ht->table[i] = NULL;
    }
    return ht;
}

// Hash function using division method
int hash_function_division(int key) {
    return key % TABLE_SIZE;
}

// Hash function using multiplication method
int hash_function_multiplication(int key) {
    double A = 0.61803398875; // Fractional part of the golden ratio
    return (int)(TABLE_SIZE * (key * A - (int)(key * A)));
}

// Insert a key-value pair into the hash table
void insert(HashTable* ht, int key, char* value, int method) {
    int index;
    if (method == 1) { // Division method
        index = hash_function_division(key);
    } else if (method == 2) { // Multiplication method
        index = hash_function_multiplication(key);
    } else {
        printf("Invalid hashing method\n");
        return;
    }

    // Handle collisions using chaining
    Node* newNode = malloc(sizeof(Node));
    newNode->key = key;
    newNode->value = value;
    newNode->next = ht->table[index];
    ht->table[index] = newNode;
}

// Retrieve the value associated with a key
char* get(HashTable* ht, int key, int method) {
    int index;
    if (method == 1) {
        index = hash_function_division(key);
    } else if (method == 2) {
        index = hash_function_multiplication(key);
    } else {
        printf("Invalid hashing method\n");
        return NULL;
    }

    Node* current = ht->table[index];
    while (current != NULL) {
        if (current->key == key) {
            return current->value;
        }
        current = current->next;
    }
    return NULL; // Not found
}

// Display the contents of the hash table
void display(HashTable* ht) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        printf("Index %d: ", i);
        Node* current = ht->table[i];
        while (current != NULL) {
            printf("(%d, %s) -> ", current->key, current->value);
            current = current->next;
        }
        printf("NULL\n");
    }
}

// Free the hash table
void free_table(HashTable* ht) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        Node* current = ht->table[i];
        while (current != NULL) {
            Node* temp = current;
            current = current->next;
            free(temp);
        }
    }
    free(ht->table);
    free(ht);
}

// Example usage
int main() {
    HashTable* ht = create_table();

    insert(ht, 1, "one", 1); // Division method
    insert(ht, 11, "eleven", 1);
    insert(ht, 21, "twenty-one", 1);

    insert(ht, 2, "two", 2); // Multiplication method
    insert(ht, 12, "twelve", 2);
    insert(ht, 22, "twenty-two", 2);

    display(ht);

    printf("Get key 1 (Division): %s\n", get(ht, 1, 1)); // Output: one
    printf("Get key 2 (Multiplication): %s\n", get(ht, 2, 2)); // Output: two

    free_table(ht);
    return 0;
}
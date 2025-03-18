#include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node* next;
};

void traverse(struct Node* n) {
    while (n != NULL) {
        printf("%d -> ", n->info);
        n = n->next;
    }
}

int main() {
    struct Node* start = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    start = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    start->info = 1; 
    start->next = second; 

    second->info = 2;
    second->next = third;

    third->info = 3;
    third->next = NULL;

    traverse(start);

    free(start);
    free(second);
    free(third);

    return 0;
}

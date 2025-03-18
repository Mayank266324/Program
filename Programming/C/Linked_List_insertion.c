#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};

void insertAtBeginning(struct Node** head_ref, int new_data) {

    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node->data = new_data;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

void insertAtEnd(struct Node** head_ref, int new_data) {
    
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head_ref; 

    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }

    last->next = new_node;
}

void insertAfter(struct Node* prev_node, int new_data) {

    if (prev_node == NULL) {
        printf("The given previous node cannot be NULL");
        return;
    }
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void traverse(struct Node* n) {
    while (n != NULL) {
        printf("%d -> ", n->data);
        n = n->next;
    }
}

int main() {
    int choice;
    struct Node* head = NULL;
    printf("Where do you want to insert the node: \n 1. Insert at start\n 2. Insert at end\n 3.Insert after a given node \n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        insertAtBeginning(&head, 7);
        printf("Created Linked list is: ");
        traverse(head);  
        break;
    case 2:
        insertAtEnd(&head, 6);
        printf("Created Linked list is: ");
        traverse(head);
        break;
    case 3:
        insertAfter(head->next, 8);
        printf("Created Linked list is: ");
        traverse(head);    
        break;
    default:
        printf("Enter the correct choice");
        break;
    }

    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}



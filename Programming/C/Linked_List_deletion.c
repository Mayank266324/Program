#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function to delete the first node (deletion at the beginning)
void deleteAtBeginning(struct Node** head_ref) {
    if (*head_ref == NULL) return; // List is empty, nothing to delete

    struct Node* temp = *head_ref;
    *head_ref = temp->next; // Move the head to the next node
    free(temp); // Free the old head
}

// Function to delete the last node (deletion at the end)
void deleteAtEnd(struct Node** head_ref) {
    if (*head_ref == NULL) return; // List is empty, nothing to delete

    struct Node* temp = *head_ref;

    // If there's only one node in the list
    if (temp->next == NULL) {
        *head_ref = NULL;
        free(temp);
        return;
    }

    // Find the second last node
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    // Free the last node and set the second last node's next to NULL
    free(temp->next);
    temp->next = NULL;
}

// Function to delete a node at a given position
void deleteAtPosition(struct Node** head_ref, int position) {
    if (*head_ref == NULL) return; // List is empty, nothing to delete

    struct Node* temp = *head_ref;

    // If the head needs to be removed
    if (position == 0) {
        *head_ref = temp->next; // Change head
        free(temp); // Free old head
        return;
    }

    // Find the previous node of the node to be deleted
    for (int i = 0; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    // If the position is more than the number of nodes
    if (temp == NULL || temp->next == NULL) return;

    // Node temp->next is the node to be deleted
    struct Node* next = temp->next->next;

    // Unlink the node from the linked list
    free(temp->next);
    temp->next = next;
}

// Function to push a node to the front of the list
void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// Function to print the linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    // Adding elements to the linked list
    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);

    // Print the linked list
    printf("Created Linked List: ");
    printList(head);

    // Deletion at the beginning
    deleteAtBeginning(&head);
    printf("Linked List after Deletion at Beginning: ");
    printList(head);

    // Deletion at the end
    deleteAtEnd(&head);
    printf("Linked List after Deletion at End: ");
    printList(head);

    // Deletion at a specific position (2nd position, index 1)
    deleteAtPosition(&head, 1);
    printf("Linked List after Deletion at Position 1: ");
    printList(head);

    return 0;
}

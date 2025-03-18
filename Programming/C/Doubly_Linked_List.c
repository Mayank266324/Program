# include<stdio.h>
# include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

void traverse(struct Node* n) {
    while (n != NULL) {
        printf("%d -> ", n->data);
        n = n->next;
    }
}

void insert_At_Beginning(struct Node** head_ref, int new_data) {

    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node->data = new_data;

    new_node->next = (*head_ref);

    new_node->prev=NULL;

    (*head_ref) = new_node;
}

void insert_At_End(struct Node** head_ref, int new_data) {
    
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
    new_node->prev= last;
}

int main()
{
    struct Node * head=NULL;
    struct Node * second=NULL;
    struct Node * third=NULL;
    struct Node * fourth=NULL;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));

    head->prev=NULL;
    head->data=10;
    head->next=second;

    second->prev=head;
    second->data=20;
    second->next=third;

    third->prev=second;
    third->data=30;
    third->next=fourth;

    fourth->prev=third;
    fourth->data=40;
    fourth->next=NULL;

    printf("The created Linked list is: \n");
    traverse(head);

    printf("\nAfter Insertion at beginning: \n");
    insert_At_Beginning(&head,0);
    traverse(head);
}

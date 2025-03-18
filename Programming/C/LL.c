# include <stdio.h>
# include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* Traversal(struct Node* n)
{
    while(n!=NULL)
    {
        printf("%d -> ",n->data);
        n=n->next;
    }
}

struct Node * insertatstart(struct Node* head,int data)
{
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr ->data=data;
    ptr ->next=head;
    return (ptr);
}

struct Node* insertinbet(struct Node* head,int data,int pos)
{
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr -> data=data;
    ptr -> next=head;
    struct Node* p=head;
    int i=0;
    while(i!=pos-1)
    {
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    return (ptr);
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

    head->data=10;
    head->next=second;
    
    second->data=20;
    second ->next=third;

    third->data=30;
    third->next=fourth;

    fourth->data=40;
    fourth->next=NULL;

    Traversal(head);
    head= insertatstart(head,0);
    printf("\n");
    Traversal(head);
    insertinbet(head,26,3);
    printf("\n");
    Traversal(head);
}
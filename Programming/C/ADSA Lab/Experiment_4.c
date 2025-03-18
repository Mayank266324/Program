#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node*prev;
struct Node*next;
};
void insertEnd(struct Node**head,int data){
struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->data=data;
newNode->next=NULL;
if(*head==NULL){
newNode->prev=NULL;
*head=newNode;
return;
}
struct Node*current=*head;
while(current->next!=NULL){
current=current->next;
}
current->next=newNode;
newNode->prev=current;
}
void display(struct Node*head){
printf("Forward: ");
struct Node*current=head;
while(current!=NULL){
printf("%d->",current->data);
current=current->next;
}
printf("NULL \n");
printf("Backward: ");
current=head;
while(current->next!=NULL){
current=current->next;
}
while(current!=NULL){
printf("%d->",current->data);
current=current->prev;
}
printf("NULL \n");
}
int main(){
struct Node*head=NULL;
insertEnd(&head,900);
insertEnd(&head,800);
insertEnd(&head,700);
printf("Doubly Linked List: \n");
display(head);
return 0;
}
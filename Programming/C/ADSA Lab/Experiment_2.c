#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* next;
};
void insertBegin(struct Node**head,int data){
struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->data=data;
newNode->next=*head;
*head=newNode;
}
void insertEnd(struct Node**head,int data){
struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->data=data;
newNode->next=NULL;
if(*head==NULL){
*head=newNode;
return;
}
struct Node*current=*head;
while(current->next!=NULL){
current=current->next;
}
current->next=newNode;
}
void deleteNode(struct Node**head,int data){
if(*head==NULL){
printf("List is empty\n");
return;
}
if((*head)->data==data){
struct Node*temp=*head;
*head=(*head)->next;
free(temp);
return;
}
struct Node*current=*head;
while(current->next!=NULL && current->next->data!=data){
current=current->next;
}
if(current->next==NULL){
printf("Value not found in list\n");
return;
}
struct Node*temp=current->next;
current->next = current->next->next;
free(temp);
}
void display(struct Node*head){
struct Node*current=head;
while(current!=NULL){
printf("%d ->",current->data);
current=current->next;
}
printf("NULL \n");
}
int main(){
struct Node*head=NULL;
insertEnd(&head,100);
insertEnd(&head,200);
insertBegin(&head,50);
insertEnd(&head,300);
printf("Linked List after insertion \n");
display(head);
deleteNode(&head,200);
printf("Linked List after deletion: \n");
display(head);
return 0;
}
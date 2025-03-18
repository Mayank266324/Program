#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node*prev;
struct Node*next;
};
struct Node*insertEnd(struct Node*head,int data){
struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->data=data;
if(head==NULL){
newNode->prev=newNode;
newNode->next=newNode;
return newNode;
}
struct Node*last=head->prev;
newNode->next=head;
newNode->prev=last;
head->prev=newNode;
last->next=newNode;
return head;
}
void display(struct Node*head) {
if(head==NULL){
printf("List is empty \n");
return;
}
struct Node*current=head;
printf("Forward: ");
do{
printf("%d->",current->data);
current=current->next;
}
while(current!=head);
printf("...\n");
current=head->prev;
printf("Backward: ");
do{
printf("%d->",current->data);
current=current->prev;
}
while(current!=head->prev);
printf(".... \n");
}
int main(){
struct Node*head=NULL;
head=insertEnd(head,900);
head=insertEnd(head,800);
head=insertEnd(head,700);
printf("Doubly Circular Linked List: \n");
display(head);
return 0;
}
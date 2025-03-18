#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node*next;
};
struct Node*insertBegin(struct Node*head,int data){
struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->data=data;
if(head==NULL){
newNode->next=newNode;
}
else{
struct Node*current=head;
while(current->next!=head){
current=current->next;
}
current->next=newNode;
newNode->next=head;
}
return newNode;
}
void display(struct Node*head){
if(head==NULL){
printf("List is empty \n");
return;
}
struct Node*current=head;
do{
printf("%d->",current->data);
current=current->next;
}
while(current!=head);
printf("...\n");
}
int main(){
struct Node*head=NULL;
head=insertBegin(head,100);
head=insertBegin(head,200);
head=insertBegin(head,300);
printf("Circular LinKed List: \n");
display(head);
return 0;
}
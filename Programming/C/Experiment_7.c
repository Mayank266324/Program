#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Node{
int data;
struct Node*next;
};
struct Stack{
struct Node*top;
};
void initializeStack(struct Stack*stack){
stack->top=NULL;
}
bool isEmpty(struct Stack*stack){
return stack->top==NULL;
}
void push(struct Stack*stack,int value){
struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->data=value;
newNode->next=stack->top;
stack->top=newNode;
}
int pop(struct Stack*stack){
if(isEmpty(stack)){
printf("Stack underflow,cannot pop\n");
return -1;
}
struct Node* temp=stack->top;
int value=temp->data;
stack->top=temp->next;
free(temp);
return value;
}
int peek(struct Stack*stack){
if(isEmpty(stack)){
printf("Stack is empty,no top element\n");
return -1;
}
return stack->top->data;
}
void display(struct Stack*stack){
struct Node*current=stack->top;
printf("Stack elements: ");
while(current!=NULL){
printf("%d \t",current->data);
current=current->next;
}
printf("\n");
}
int main(){
struct Stack stack;
initializeStack(&stack);
push(&stack,100);
push(&stack,250);
push(&stack,300);
display(&stack);
printf("Top element: %d\n",peek(&stack));
printf("Popped element: %d\n",pop(&stack));
printf("Popped element: %d\n",pop(&stack));
display(&stack);
return 0;
}
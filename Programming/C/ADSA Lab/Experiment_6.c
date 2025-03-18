#include<stdio.h>
#include<stdbool.h>
#define MAX_SIZE 100
struct Stack{
int arr[MAX_SIZE];
int top;
};
void initializeStack(struct Stack*stack){
stack->top=-1;
}
bool isEmpty(struct Stack*stack){
return stack->top==-1;
}
bool isFull(struct Stack*stack){
return stack->top==MAX_SIZE-1;
}
void push(struct Stack*stack,int value){
if(isFull(stack)){
printf("Stack overflow,cannot push %d\n",value);
return;
}
stack->top++;
stack->arr[stack->top]=value;
}
int pop(struct Stack*stack){
if(isEmpty(stack)){
printf("Stack underflow,cannot pop\n");
return -1;
}
int value=stack->arr[stack->top];
stack->top--;
return value;
}
int peek(struct Stack*stack){
if(isEmpty(stack)){
printf("Stack is empty,no top element\n");
return -1; }
return stack->arr[stack->top]; }
int main(){
struct Stack stack;
initializeStack(&stack);
push(&stack,150);
push(&stack,250);
push(&stack,300);
printf("Top element: %d\n",peek(&stack));
printf("Popped element: %d\n",pop(&stack));
printf("Popped element: %d\n",pop(&stack));
printf("Top element: %d\n",peek(&stack));
return 0;
}
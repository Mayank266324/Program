#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct Node {
int data;
struct Node* next;
};
struct Queue {
struct Node* front;
struct Node* rear; };
struct Queue* createQueue() {
struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
queue->front = NULL;
queue->rear = NULL;
return queue;
}
bool isEmpty(struct Queue* queue) {
return queue->front == NULL; }
void enqueue(struct Queue* queue, int value) {
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = value;
newNode->next = NULL;
if (isEmpty(queue)) {
queue->front = newNode;
}
else {
queue->rear->next = newNode;
}
queue->rear = newNode;
printf("%d enqueued to queue\n", value);
}
int dequeue(struct Queue* queue) {
if (isEmpty(queue)) {
printf("Queue is empty!\n");
return -1;
}
struct Node* temp = queue->front;
int item = temp->data;
queue->front = queue->front->next;
if (queue->front == NULL) {
queue->rear = NULL;
}
free(temp);
return item;
}
void display(struct Queue* queue) {
if (isEmpty(queue)) {
printf("Queue is empty!\n");
return;
}
struct Node* current = queue->front;
printf("Queue elements: ");
while (current != NULL) {
printf("%d ", current->data);
current = current->next;
}
printf("\n");
}
int main() {
struct Queue* queue = createQueue();
enqueue(queue, 100);
enqueue(queue, 200);
enqueue(queue, 300);
display(queue);
printf("%d dequeued from queue\n", dequeue(queue));
display(queue);
enqueue(queue, 400);
enqueue(queue, 500);
display(queue);
printf("%d dequeued from queue\n", dequeue(queue));
display(queue);
while (!isEmpty(queue)) {
dequeue(queue);
}
free(queue);
return 0; }
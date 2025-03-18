#include <stdio.h>
#include <stdbool.h>
#define MAX 100
struct Queue {
int items[MAX];
int front;
int rear;
};
void initializeQueue(struct Queue*queue) {
queue->front=-1;
queue->rear=-1;
}
bool isEmpty(struct Queue*queue) {
return queue->front == -1;
}
bool isFull(struct Queue*queue) {
return queue->rear==MAX-1;
}
void enqueue(struct Queue*queue, int value) {
if (isFull(queue)) {
printf("Queue is full!\n");
return;
}
if (isEmpty(queue)) {
    queue->front = 0;
}
queue->rear++;
queue->items[queue->rear] = value;
printf("%d enqueued to queue\n", value);
}
int dequeue(struct Queue*queue) {
if (isEmpty(queue)) {
printf("Queue is empty!\n");
return -1;
}
int item = queue->items[queue->front];
if (queue->front >= queue->rear) {
queue->front = -1;
queue->rear = -1;
}
else {
queue->front++;
}
return item;
}
void display(struct Queue*queue) {
if (isEmpty(queue)) {
printf("Queue is empty!\n");
return;
}
printf("Queue elements: ");
for (int i = queue->front; i <= queue->rear; i++) {
printf("%d ", queue->items[i]);
}
printf("\n");
}
int main() {
struct Queue queue;
initializeQueue(&queue);
enqueue(&queue, 100);
enqueue(&queue, 200);
enqueue(&queue, 300);
display(&queue);
printf("%d dequeued from queue\n", dequeue(&queue));
display(&queue);
enqueue(&queue, 400);
enqueue(&queue, 500);
display(&queue);
printf("%d dequeued from queue\n", dequeue(&queue));
display(&queue);
return 0;
}
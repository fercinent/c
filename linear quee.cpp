#include <stdio.h>
#define N 5

int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x) {
    if (rear == N - 1) {
        printf("Queue overflow\n");
    } 
    else if (front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = x;
    } 
    else {
        rear++;
        queue[rear] = x;
    }
}

void dequeue() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty\n");
    } 
    else if (front == rear) {
        printf("Dequeued element: %d\n", queue[front]);
        front = rear = -1;
    } 
    else {
        printf("Dequeued element: %d\n", queue[front]);
        front++;
    }
}

void display() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty\n");
    } 
    else {
        int i;
        printf("Queue elements: ");
        for (i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

void peek() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty\n");
    } 
    else {
        printf("Front element: %d\n", queue[front]);
    }
}

int main() {
    enqueue(4);
    enqueue(5);
    enqueue(6);
    display();
    dequeue();
    display();
    peek();
}


#include <stdio.h>
#define SIZE 5  // Maximum size of the queue

int queue[SIZE];
int front = -1, rear = -1;

// Function to check if the queue is full
int isFull() {
    return (rear == SIZE - 1);
}

// Function to check if the queue is empty
int isEmpty() {
    return (front == -1 || front > rear);
}

// Function to add an element to the queue
void enqueue(int value) {
    if (isFull()) {
        printf("Queue Overflow! Cannot insert %d\n", value);
    } else {
        if (front == -1) front = 0;  // Initialize front
        rear++;
        queue[rear] = value;
        printf("%d inserted into queue.\n", value);
    }
}

// Function to remove an element from the queue
void dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow! Nothing to remove.\n");
    } else {
        printf("%d removed from queue.\n", queue[front]);
        front++;
    }
}

// Function to display the queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60); // Overflow test

    display();

    dequeue();
    dequeue();

    display();

    enqueue(70); // This will not work as it is a linear queue (no wrap-around)
    display();

    return 0;
}


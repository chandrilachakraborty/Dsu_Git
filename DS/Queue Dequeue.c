#include <stdio.h>
#define MAX 100

int queue[MAX];
int front = -1;
int rear = -1;

// Function to check if the queue is full
int isFull() {
    return rear == MAX - 1;
}

// Function to check if the queue is empty
int isEmpty() {
    return front == -1 || front > rear;
}

// Function to add an element to the queue
void enqueue(int element) {
    if (isFull()) {
        printf("Queue is full\n");
    } else {
        if (front == -1) {
            front = 0;  // Initialize front when first element is added
        }
        rear++;
        queue[rear] = element;
        printf("Inserted %d\n", element);
    }
}

// Function to remove an element from the queue (dequeue)
void dequeue() {
    if (isEmpty()) {
        printf("Queue is empty\n");
    } else {
        printf("Removed %d\n", queue[front]);
        front++;
        if (front > rear) {
            front = rear = -1;  // Reset the queue when all elements are dequeued
        }
    }
}

// Function to display the queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements are: ");
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
    display();
    
    dequeue();  // Removing the first element
    display();
    
    dequeue();  // Removing the second element
    display();
    
    dequeue();  // Removing the third element
    display();
    
    dequeue();  // Attempting to remove from an empty queue
    
    return 0;
}

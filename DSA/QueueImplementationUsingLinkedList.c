#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Enqueue operation: Add element at the end of the queue
void enqueue(struct Node** front, struct Node** rear, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*rear == NULL) {
        *front = *rear = newNode;
        printf("%d enqueued to queue\n", value);
        return;
    }
    (*rear)->next = newNode;
    *rear = newNode;
    printf("%d enqueued to queue\n", value);
}

// Dequeue operation: Remove the front element
int dequeue(struct Node** front, struct Node** rear) {
    if (*front == NULL) {
        printf("Queue is empty\n");
        return -1;
    }
    struct Node* temp = *front;
    int dequeuedValue = temp->data;
    *front = (*front)->next;

    if (*front == NULL) {
        *rear = NULL;  // If the queue becomes empty, reset rear to NULL
    }
    free(temp);
    return dequeuedValue;
}

// Display queue elements
void display(struct Node* front) {
    if (front == NULL) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    while (front != NULL) {
        printf("%d ", front->data);
        front = front->next;
    }
    printf("\n");
}

// Main function
int main() {
    struct Node* front = NULL;
    struct Node* rear = NULL;

    enqueue(&front, &rear, 10);
    enqueue(&front, &rear, 20);
    enqueue(&front, &rear, 30);

    display(front);  // Output: 10 20 30

    printf("%d dequeued from queue\n", dequeue(&front, &rear));  // Output: 10 dequeued
    display(front);  // Output: 20 30

    return 0;
}

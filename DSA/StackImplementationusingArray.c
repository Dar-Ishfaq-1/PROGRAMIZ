#include <stdio.h>
#define MAX 5  // Maximum size of the stack

int stack[MAX];
int top = -1;

// Push operation: Insert element into the stack
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack overflow\n");
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed to stack\n", value);
    }
}

// Pop operation: Remove the top element
int pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        return -1;
    } else {
        int value = stack[top];
        top--;
        return value;
    }
}

// Display all elements of the stack
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

// Main function
int main() {
    push(10);
    push(20);
    push(30);
    display();  // Output: 10 20 30

    printf("%d popped from stack\n", pop());  // Output: 30 popped
    display();  // Output: 10 20

    return 0;
}

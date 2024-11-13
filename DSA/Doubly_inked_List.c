#include<stdio.h>

// Structure definition for a doubly linked list node
struct list {
    int value;
    struct list *next;     // Pointer to the next node
    struct list *previous; // Pointer to the previous node
} n1, n2, n3; // Creating three nodes of type 'list'

int main() {
    int j;

    // Assigning values to the nodes
    n1.value = 20;
    n2.value = 40;
    n3.value = 60;

    // Linking nodes together
    n1.previous = NULL;   // n1 is the first node, so previous is NULL
    n1.next = &n2;        // n1 points to n2
    
    n2.previous = &n1;    // n2 previous points to n1
    n2.next = &n3;        // n2 points to n3 (this was missing in the original code)

    n3.previous = &n2;    // n3 previous points to n2
    n3.next = NULL;       // n3 is the last node, so next is NULL

    // Storing the value of the second node (n2) in variable j
    j = n1.next->value;
    printf("The value of n2 (next element of n1) is: %d\n", j);

    // Printing values of the next nodes
    printf("The value of n2 (next of n1): %d\n", n1.next->value);
    printf("The value of n3 (next of n2): %d\n", n2.next->value);  // Now this works

    // Printing values of the previous nodes
    printf("The value of n1 (previous of n2): %d\n", n2.previous->value);
    printf("The value of n2 (previous of n3): %d\n", n3.previous->value);

    return 0;
}

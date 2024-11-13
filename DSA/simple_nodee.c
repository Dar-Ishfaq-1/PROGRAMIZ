#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

int main() {
    // Create the head node
    struct node *head = malloc(sizeof(struct node));
    head->data = 27;
    head->link = NULL;

    // Create the second node
    struct node *current = malloc(sizeof(struct node));
    current->data = 44;
    current->link = NULL;
    head->link = current; // Link head to the second node

    // Create the third node
    struct node *current2 = malloc(sizeof(struct node));
    current2->data = 47;
    current2->link = NULL;
    current->link = current2; // Link the second node to the third node

    // Print the linked list
    struct node *ptr = head;
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->link;
    }
    printf("NULL\n");

    return 0;
}

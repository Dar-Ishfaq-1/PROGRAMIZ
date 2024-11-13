#include <stdio.h>
#include <stdlib.h>

// Define the structure for a Node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node and insert it at the beginning
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); // Create a new node
    newNode->data = data;  // Assign data
    newNode->next = *head; // Point the new node's next to the current head
    *head = newNode;       // Make the new node the new head
}

// Function to display the linked list
void displayList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    struct Node* head = NULL; // Initially the list is empty

    // Insert nodes at the beginning of the linked list
    insertAtBeginning(&head, 30);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 10);
    
    // Display the list
    printf("Linked list: ");
    displayList(head);

    return 0;
}

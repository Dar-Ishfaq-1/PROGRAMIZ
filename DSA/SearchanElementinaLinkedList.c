#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the end
void insertAtEnd(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to search for a node
int search(struct Node* head, int key) {
    struct Node* temp = head;
    
    while (temp != NULL) {
        if (temp->data == key) {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

// Main function
int main() {
    struct Node* head = NULL;

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);

    int key = 20;
    if (search(head, key)) {
        printf("%d found in the linked list.\n", key);
    } else {
        printf("%d not found in the linked list.\n", key);
    }

    key = 40;
    if (search(head, key)) {
        printf("%d found in the linked list.\n", key);
    } else {
        printf("%d not found in the linked list.\n", key);
    }

    return 0;
}

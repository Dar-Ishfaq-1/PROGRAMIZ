/ Function to insert a node at the end of the list
// void insertAtEnd(struct Node** head, int value) {
//     struct Node* newNode = createNode(value);
    
//     // If the list is empty, insert at the beginning
//     if (*head == NULL) {
//         *head = newNode;
//         return;
//     }

//     struct Node* temp = *head;
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }
//     temp->next = newNode;
// }

// // Function to insert a node after a given node
// void insertAfterNode(struct Node* prevNode, int value) {
//     if (prevNode == NULL) {
//         printf("Previous node cannot be NULL\n");
//         return;
//     }
    
//     struct Node* newNode = createNode(value);
//     newNode->next = prevNode->next;
//     prevNode->next = newNode;
// }
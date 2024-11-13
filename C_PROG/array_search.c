#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4};
    int key, i;
    int found = 0; // Flag to indicate if the element is found

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (i = 0; i < 4; i++) {
        if (key == arr[i]) {
            found = 1; // Set the flag to true
            break; // Exit the loop as we found the element
        }
    }

    if (found) {
        printf("The element %d is present at position %d.\n", key, i);
    } else {
        printf("The element %d is not present in the array.\n", key);
    }

    return 0;
}

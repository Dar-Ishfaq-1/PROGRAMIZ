#include <stdio.h>

int main() {
    int i, j, temp,size=5;
    int arr[5] = {5, 3, 8, 2, 1};
    //int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // Bubble Sort logic
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                //printf(arr[5]);
            }
        }
    }

    printf("\nArray after sorting: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

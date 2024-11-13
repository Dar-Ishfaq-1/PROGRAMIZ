#include<stdio.h>

#define n 6  

int main() {
    int i, j, temp, flag;

    int a[n] = {5, 2, 5, 3, 9, 8};  

    printf(" Array before sort : ");
    for(i = 0; i < n; i++) 
    printf("%d ",a[i]);
    printf("\n");

    // Bubble sort algorithm
    for(i = 0; i < n - 1; i++) {
        flag = 0;  // Reset flag for each outer loop iteration
        for(j = 0; j < n - i - 1; j++) {  // Inner loop
            if(a[j] > a[j + 1]) {  // Swap if the current element is greater than the next
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;  // Set flag to indicate a swap has occurred
            }
        }
        if(flag == 0) {  // If no swaps occurred, the array is already sorted
            break;
        }
    }

    // Print the sorted array
    printf("Sorted array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

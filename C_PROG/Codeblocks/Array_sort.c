#include <stdio.h>

int main() {
    int i, j, temp;
    int a[5] = {1, 5, 3, 2, 4};
    int n = 5;

    // Print the given array
    printf("The given array is: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    // Sort the array using Bubble Sort
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("The sorted array is: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}

#include <stdio.h>

int main() {
    int n, i, temp;

    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

   
    int arr[n];

  
    printf("Enter the %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];

        arr[n - 1 - i] = temp;
    }

    
    printf("Reverse of the array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    return 0;
}

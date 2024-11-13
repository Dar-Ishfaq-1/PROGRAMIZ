#include <stdio.h>

int main() {
    int n, i, temp;

    
    printf("Enter the array size: ");
    scanf("%d", &n);

    
    int a[n];

    
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    
    for (i = 0; i < n / 2; i++) {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }

    
    printf("The reversed elements of the array are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}


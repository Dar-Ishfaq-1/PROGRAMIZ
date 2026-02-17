
#include <stdio.h>

int main() {
    
    int n,i;

    
    printf("Enter the array size : ");
    scanf("%d",&n);

    int a[n];
    
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    
    printf("The elements of the array are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
   

    return 0;
}
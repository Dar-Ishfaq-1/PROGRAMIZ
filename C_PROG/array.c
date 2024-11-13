
#include <stdio.h>

int main() {
    int a[5], i;

    
    
    
    printf("Enter the elements: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    
    printf("The elements of the array are: ");
    for (i = 0; i < 5; i++) {
        printf("%d", a[i]);
    }
   

    return 0;
}
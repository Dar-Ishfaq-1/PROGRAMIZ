#include <stdio.h>

int main() {
    int x;
    
    printf("Enter the number: ");
    scanf("%d", &x);
    
    if (x == 0) {
        printf("The entered number is zero.\n");
    } 
    else if (x > 0) {
        if (x % 2 == 0) {
            printf("The entered number is even.\n");
        }
        else {
            printf("The entered number is odd.\n");
        }
    }
    else {
        if (x % 2 == 0) {
            printf("The entered number is negative even.\n");
        }
        else {
            printf("The entered number is negative odd.\n");
        }
    }
    
    return 0;
}

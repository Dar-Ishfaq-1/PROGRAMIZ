#include <stdio.h>

// Function to check if a number is even or odd
void checkEvenOdd(int num) {
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
}

int main() {
    int number;
    
    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Calling the function to check even or odd
    checkEvenOdd(number);

    return 0;
}

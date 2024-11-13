#include <stdio.h>

int main() {
    int i, Array[5], sum = 0;

    for (i = 0; i < 5; i++) {
        printf("Enter the element: ");
        scanf("%d", &Array[i]);
    }

    for (i = 0; i < 5; i++) {
        sum += Array[i];
    }

    printf("The Sum of Given Array Elements is: %d\n", sum);

    return 0;
}

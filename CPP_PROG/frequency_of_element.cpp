#include <stdio.h>

int main() {
    int a[5], i, key, freq = 0;

    for (i = 0; i < 5; i++) {
        printf("Enter the element : ");
        scanf("%d", &a[i]);
    }

    printf("Enter the element to find frequency : ");
    scanf("%d", &key);

    for (i = 0; i < 5; i++) {
        if (a[i] == key) {
            freq++;
        }
    }

    printf("The frequency of %d is %d\n", key, freq);

    return 0;
}

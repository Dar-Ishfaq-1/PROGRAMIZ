#include <stdio.h>

int main() {
    int i, key, found = 0;
    int a[5] = {1, 0, 3, 2, 5};
    int n = 5;


    printf("The given array is: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");


    printf("Enter the element to search: ");
    scanf("%d", &key);


    for(i = 0; i < n; i++) {
        if(a[i] == key) {
            printf("Element %d found at index %d\n", key, i);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Element %d not found in the array\n", key);

    return 0;
}

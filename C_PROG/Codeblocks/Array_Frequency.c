#include <stdio.h>

int main() {
    int i, j, count;
    int a[5] = {1, 5, 3, 1, 5};
    int n = 5;
    int visited[5] = {0};

    // Print the given array
    printf("The given array is: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    // Count the frequency of elements
    printf("Frequency of elements:\n");
    for(i = 0; i < n; i++) {
        if(visited[i] == 1)
            continue;

        count = 1;
        for(j = i+1; j < n; j++) {
            if(a[i] == a[j]) {
                count++;
                visited[j] = 1;
            }
        }
        printf("Element %d occurs %d times\n", a[i], count);
    }

    return 0;
}

#include<stdio.h>

int main()
{
    int arr[5], i, temp, n;
    
    printf("Enter the size of the array (max 5): ");
    scanf("%d", &n);

    if(n > 5) {
        printf("Array size exceeds limit.\n");
        return 1; // Exit the program if the size is greater than 5
    }

    for(i = 0; i < n; i++)
    {
        printf("Enter the element at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Reverse the array
    for(i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("The reversed array is: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*#include<stdio.h>

int main()
{
    int a[5],i;

    printf("Enter the elements : ");

     for(i=0; i<5; i++ )
    {


      scanf("%d",&a[i]);

    }

    printf("The elements of the array : ");

     for(i=0; i<5; i++ )

     printf("%d",a[i]);

    printf("\n");

    return 0;

}*/

#include <stdio.h>

int main() {
    int a[5], i;

    // Input elements from the user
    printf("Enter the elements: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    // Print all the elements of the array
    printf("The elements of the array are: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}







#include <stdio.h>
int main(){

    int i;

    int a[5]={1,2,3,4,5};


    printf("The given array is : ");
    for(i=0; i<5; i++)

    printf("%d ",a[i]);

    int temp;

    for(i=0; i<5/2; i++)


    temp=a[i];
    a[i]=a[4-i];
    a[4-i]=temp;

    printf("\n");

    printf("The reverse of given array is : ");
    for(i=0;i<5;i++)
    printf("%d ",a[i]);

return 0;

}


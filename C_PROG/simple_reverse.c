#include <stdio.h>
int main(){
/*int n;


printf("Enter the size of array : ");
scanf("%d",&n);*/
int i;
    int  a[5]={1,3,2,5,7};

    printf("The given array is : ");

    for(i=0; i<5; i++)
    printf("%d ",a[i]);
    int temp;

    temp=a[0];
    a[0]=a[4];
    temp=a[4];
    printf("\n");
    
    printf("%d",a[1]);

    temp=a[1];
    a[1]=a[3];
    temp=a[3];
    printf("\n");

    printf("%d",a[1]);








return 0;

}
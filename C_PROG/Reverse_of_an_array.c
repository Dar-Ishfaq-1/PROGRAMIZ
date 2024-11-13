#include <stdio.h>
int main(){
    int n,i,rev;
    

    printf("Enter the array size : ");
    scanf("%d",&n);

    int a[n];
    printf("Enter the array elements ");
    
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("\nThe given array is : ");

    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
        printf(" ");
    }
    for(i=0;i<n/2;i++)
    {

        rev=a[i];
        a[i] = a[n-1-i];
        a[n-1-i]=rev;

    }


    printf("\nThe reverse of an array is : ");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
        printf(" ");
    }
    







return 0;

}
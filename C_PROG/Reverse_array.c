#include <stdio.h>
int main(){
    int n,i;
    printf("Enter the size of array : ");
    scanf("%d",&n);

    
    int a[n];

    printf("Enter the elements : ");

    for(i=0; i<n; i++)

    scanf("%d",&a[i]);

    printf("The given array is : ");
    for(i=0;i<n;i++)

    printf("%d ",a[i]);

    
    int temp;

    
    for(i=0; i<n; i++)
    {
    temp = a[i];
    a[i]=a[n-i-1];
    temp=a[n-i-1];
    }
    printf("\n");
    printf("The reverse array is  : " );
    for(i=0; i<n; i++)
    
    printf("%d ",a[i]);










return 0;

}
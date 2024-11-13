#include <stdio.h>
int main(){
    int n,i;

    printf("Enter the array size  : ");
    scanf("%d",&n);
    
    int a[n], b[n],c[n];
    printf("Enter the  elements of array first :");
    
    for(i=0;i<n;i++){

    scanf("%d",&a[i]);
    }
    
    printf("Enter the array  elements of second : ");
    
    for(i=0;i<n;i++){

    scanf("%d",&b[i]);
    }

    printf("\nThe elements of first array are : ");
    
    for(i=0;i<n;i++)

    {
    printf("%d",a[i]);
    printf(" ");


    }

    
    printf("\nThe elements of second array are : ");
    
    for(i=0;i<n;i++){

        
    printf("%d",b[i]);
    printf(" ");
    }
    for(i=0;i<n;i++){ 
        c[i]=a[i]+b[i];
    }

    

    printf("\nThe elements of third array obtained by adding two given arrays are : ");
    for(i=0;i<n;i++){
        printf("%d",c[i]);
        printf(" ");
    

    }
    



return 0;

}
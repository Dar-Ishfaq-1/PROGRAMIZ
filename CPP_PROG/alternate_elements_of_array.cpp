// Online C compiler to run C program online
#include <stdio.h>

int main() {

    int a[5],i;

    for(i=0;i<5;i++){
        
        printf("Enter the element : ");
        scanf("%d",&a[i]);
    }
    printf("The alternate elements of a given array  are : ");
    
    for(i=0;i<5;i=i+2){
        printf(" %d",a[i]);
}
    return 0;
}
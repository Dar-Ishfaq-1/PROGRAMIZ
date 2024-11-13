// Online C compiler to run C program online
#include <stdio.h>


    int main(){
    int a[5],i;
    for(i=0;i<5;i++){
     printf("Enter the element : ");
     scanf("%d",&a[i]);
     
    }
    printf("The reverse array of given array is ");
    for(i=4;i>=0;i--){
    printf(" %d",a[i]);
    }
    return 0;
}
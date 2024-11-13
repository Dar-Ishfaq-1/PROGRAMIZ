// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,sum=0;
    printf("Enter the number : ");
    scanf("%d",&i);
    
    while(i>0){
    
    sum = sum+i%10;
    
    i=i/10;
    }
    printf("The sum of digits of  is %d",sum);
    return 0;
}
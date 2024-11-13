
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,fac = 1;
    printf("Enter the number : ");
    scanf("%d",&i);
    
    while(i>=1){
    
    fac = fac*i;
    
    i--;
    }
    printf("The factorial of a given number is %d",fac);
    return 0;
}
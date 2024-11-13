// Online C compiler to run C program online
#include <stdio.h>

int mul(int a,int b)
{
    return a*b;
    
}

int main() {
    int a;
    int b;
    printf("Enter the first number : ");
    scanf("%d",&a);
    
    printf("Enter the second number : ");
    scanf("%d",&b);
    
    // Write C code here
    int result = mul(a,b);
    printf("The multiplication of %d and %d is : %d",a,b,result);
    

    return 0;
}
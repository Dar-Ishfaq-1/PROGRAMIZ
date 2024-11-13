// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int a,b,power;

int main() {
    
     printf("Enter the vale value of a :");
     scanf("%d",&a);
     printf("Enter the vale value of b :");
     scanf("%d",&b);
     power=pow(a,b);
     printf("%d to the power of %d is %d\n",a,b,power);
     
    return 0;
}
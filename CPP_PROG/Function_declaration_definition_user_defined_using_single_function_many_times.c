#include <stdio.h>

void add();

int main(){

    add();
    printf("Help the needy!\n ");
    add();
    printf("How are you ? \n");
    add();

return 0;

}

void  add()
{

    int a,b,sum;

    printf("Enter the two numbers : ");
    scanf("%d %d",&a,&b);
    
    sum = a+b;
    printf("The sum of %d and %d is %d \n",a,b,sum);
    }
    




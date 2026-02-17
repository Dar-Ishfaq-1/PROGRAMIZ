#include<stdio.h>

void fact()
{
    int n,num,result = 1;
    printf("Enter the number : ");
    scanf("%d",&num);
    n=num;
    while(n>0)
    {

        result*=n;
        n--;
    }
    printf("The factorial of %d is %d ",num, result);
}
    void main()
    {
         fact();
    }
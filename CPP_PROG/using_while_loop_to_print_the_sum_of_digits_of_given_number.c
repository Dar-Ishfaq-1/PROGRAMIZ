#include<stdio.h>

int main(){

int n,num,sum;
printf("Enter the number : ");
scanf("%d",&num);
    n=num;
while(n>0)
{

sum = sum + (n%10);
n = n/10;


}

printf("The sum of digits of  %d  is : %d  " ,num,sum);
return 0;
}
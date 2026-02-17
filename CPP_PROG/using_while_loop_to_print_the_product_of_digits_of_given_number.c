#include<stdio.h>

int main(){
int pro=1 ,n,num;

printf("Enter the number : ");
scanf("%d",&num);
         n=num;
while(n>0)
{

pro = pro*(n%10);

n =n/10;



}
printf("The product of the digits of %d given number is : %d ",num,pro);

return 0;
}
#include <stdio.h>
int main(){
int num;

printf("Enter the number : ");
scanf("%d",&num);
if(num==0)
printf("Entered number is zero.");
else if(num<0)
printf("Entered number is negative ");
else
printf("The entered number is positive ");

return 0;

}
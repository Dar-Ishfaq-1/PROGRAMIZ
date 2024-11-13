#include <stdio.h>
int main(){

    int marks[5];
int i,avg,sum=0;


printf("Enter the marks : ");
for(i=0;i<5;i++)
{
scanf("%d",&marks[i]);

}

printf("The marks of the students are : ");
for(i=0;i<5;i++)
{ 
printf("%d",marks[i]);
}
for(i=0;i<5;i++)
{
sum = sum+marks[i];
}
printf("The sum of the marks is : %d",sum);

avg = sum/5;

return 0;

}
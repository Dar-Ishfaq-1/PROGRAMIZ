#include <stdio.h>
int main(){



    int a[5],i;

for(int i=0;i<5;i++)
{
printf("Enter the array element : ");
scanf("%d",&a[i]);

}

printf("The elements of the given array are : ");

for(i=0;i<5;i++)
{
printf("%d",a[i]);
printf(" ");

}

printf("\nThe reverse of the array is : ");
for(i=4;i>=0;i--)
{

printf("%d",a[i]);
printf(" ");
}




return 0;

}
#include<stdio.h>

int main()
{

int arr[5],i;

printf("Enter the element \n ");
for(i=0;i<5;i++)
{

    scanf("%d",&arr[i]);

}
printf("Elements in the array are : \n");

for(i=0;i<5;i++)
{

    printf("%d \t",arr[i]);

}

return 0;
}
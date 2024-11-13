#include <stdio.h>
int main(){

int i;

int a[5]={1,2,3,4,5};


printf("The given array is : ");
for(i=0; i<5; i++)

printf("%d ",a[i]);

int temp,n;

for(i=0; i<5/2; i++)

/* 
#genaralised
temp=a[i];

a[i]=a[n-i-1];

temp=a[n-1-1];
*/
temp=a[i];

a[i]=a[4-i];

a[4-1]=temp;
printf("\n");

printf("The reverse of given array is : ");
for(i=0;i<5;i++)
printf("%d ",a[i]);

return 0;

}


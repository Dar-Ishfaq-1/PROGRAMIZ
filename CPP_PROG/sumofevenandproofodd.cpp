#include <iostream>

int main(){
int a[5];
int i,sum=0,pro=1;
for(i=0;i<5;i++){
printf("Enter the element : ");
scanf("%d",&a[i]);}

for(i=0;i<5;i++){
if(a[i]%2==0)
sum = sum+a[i];
else
pro=pro*a[i];
}
printf("\n The sum of even numbers is %d and product is %d ",sum,pro);
return 0;
}
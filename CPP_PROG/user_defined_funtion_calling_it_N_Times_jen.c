#include <stdio.h>



void add(){
    int a,b,sum;

printf("Enter two numbers : ");
scanf("%d %d",&a,&b);
sum = a+b;
printf("The sum of %d and %d  is : %d\n",a,b,sum);

}

int main(){

  add();
printf("Help the world!\n ");
  add();
  printf("Help the needy!\n ");

return 0;

}
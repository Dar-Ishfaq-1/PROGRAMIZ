#include <stdio.h>
int main(){
int a,b,c;


printf("Enter the number first number : ");
scanf("%d",&a);


printf("Enter the number second number : ");
scanf("%d",&b);


printf("Enter the number third number : ");
scanf("%d",&c);

if(a>b && a>c)
printf("%d is the greatest number among the three.",a);

else if (b>c && b>a)
printf("%d is the greatest among the three. ",b);

else
printf("%d is the greatest among the three. " ,c);

return 0;

}
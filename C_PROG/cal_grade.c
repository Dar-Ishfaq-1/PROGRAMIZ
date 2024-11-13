#include <stdio.h>
int main(){
int percentage;

printf("Enter the marks : ",percentage);
scanf("%d",&percentage);



if(percentage>=90 && percentage<=100)
printf("grade A");


else if(percentage>=75 && percentage<90)
printf("grade B");

else if(percentage>=60 && percentage<75)
printf("grade C");


else if(percentage>=30 && percentage<60)
printf("grade D");

else  
printf("Grde F");


return 0;

}
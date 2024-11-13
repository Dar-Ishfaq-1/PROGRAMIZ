#include <stdio.h>
void add(int  ,int  );//Here in the arguments the name(s) 
                      //of the variable(s) is(are) not necessary
                      // to mention


int main(){
   add(6,4);
    printf("\nHelp the poor!\n");
    add(7,9);
    printf("\nclose the door!\n");

return 0;
}

void add(int a,int b){
int sum=0;
    sum = a+b;
printf("The sum of %d and %d  is : %d",a,b,sum);
}


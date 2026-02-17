#include <stdio.h>
void add(int  ,int  );//Here in the arguments the name(s) 
                      //of the variable(s) is(are) not necessary
                      // to mention


int main(){
   add(6,4);

return 0;
}

void add(int a,int b){
int sum=0;
    sum = a+b;
printf("The sum of the given two numbers is : %d",sum);
}


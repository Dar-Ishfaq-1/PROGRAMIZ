#include <stdio.h>
void add(int  ,int  );//we can write different names
                     //of the arguments in the function
                     //e,g: add(int m,int n);
int main(){
    int x=4;int y=8;
   add(x,y);
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


#include<stdio.h>



int main(){
    int i;

    int x[] = {1,3,2,4,5,6};
    for(i=0;i<7;i++)
    {

        printf("%d\n",x[i]); 
        printf("%p\n",&x[i]);
         
    }
    return 0;
  
}
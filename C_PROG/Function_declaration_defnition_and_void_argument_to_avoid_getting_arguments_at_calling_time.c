#include <stdio.h>

void add(void); 

//here if we don't use void as argument inside 
//parenthesis ,at the time of calling function 
//if we supply int arguments it will accept those
//which is need good practice.

int main(){
    add();

   return 0;

}
/* 
in the main function when we call the user defined function 
the declaration and definition are compared first if they 
are same i,e having the same type  and number of arguments 
and also return types only then the program gets executed 
otherwise it will through an error.
*/

void add(void)
{

    int a,b,sum;

    printf("Enter the number : ");
    scanf("%d %d",&a,&b);

    sum=a+b;
    printf("The sum of two given numbers is : %d ",sum);


}





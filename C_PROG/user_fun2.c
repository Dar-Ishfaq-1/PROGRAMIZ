// #include <stdio.h>

// int add(int,int);

// int main(){

// int a,b,sum;


// printf("Enter the two numbers : ");
// scanf("%d%d",&a,&b);

//  sum=add( a,b);

//  printf("the sum of %d and %d is  : %d",a,b,sum);

//  return 0;
// }
 

// int add(int a,int b) {

// return a+b;
// }
    





#include <stdio.h>
int add(int,int);

int main(){

int a,b,result;

printf("Enter the two numbers : ");

scanf("%d %d ",&a,&b);

    result = add(a,b);

printf("The sum of %d and %d is : %d\n",a,b,result);

    return 0;
}
    int add(int a, int b){
        return a+b;

    }
       


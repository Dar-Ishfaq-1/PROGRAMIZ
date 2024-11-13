#include <stdio.h>


int main() {
    int x ;
    printf("Enter the number : ");
    scanf("%d",&x);
     
    if(x==0) {
      printf("The entered number is zero. ");
    }
   else if(x%2==0)
    {
    printf("The entered number is even. ");
    }
    else (x%2==1)
    {
    
    printf("The entered number is odd. ");
    }
    
    
    return 0;
}


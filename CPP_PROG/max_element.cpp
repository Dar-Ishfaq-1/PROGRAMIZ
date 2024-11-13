#include <stdio.h>

int main() {
   int a[5],i,max=0;
   for(i=0;i<5;i++){
   printf("Enter the element : ");
   scanf("%d",&a[i]);
   }
   max=a[0];
    for(i=0;i<5;i++)
    if(a[i]>max){
        max=a[i];
    }
    printf("\n The max element is %d ",max);
   
    return 0;
}

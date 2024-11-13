#include <stdio.h>
int main(){
int a[10],i;
int odd=0,eve=0;

    printf("Enter the ten elements : \n");

    for(i=0;i<10;i++)
    scanf("%d",&a[i]);

    printf("Entered elements are  : \n");
    for(i=0;i<10;i++)
    {
    printf("%d",a[i]);
    printf(" ");
    //}
    //for(i=0;i<10;i++){
    
    
    if(a[i]%2==0)
    { 
        odd++;
        
    }
    else 
    {
        eve++;
    }
    }
    printf("\nThe number of odd numbers in the given array are : %d",odd);
    printf("\nThe number of even numbers in the given array are : %d",eve);
return 0;

}
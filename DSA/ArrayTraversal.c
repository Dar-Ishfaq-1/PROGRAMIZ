#include <stdio.h>

int main(){ 

int size,i;

int arr[50];

printf("Enter the array size : ");
scanf("%d",&size);

if (size > 50);
{
    print("Overflow condition.");

}

else
{

    printf("Enter the elements of an array : ");
for(i=0;i<size;i++){
scanf("%d",&arr[i]);
}

printf("The entered array is : ");
for(i=0;i<size;i++){

printf("%d ",arr[i]);


}

}



return 0;


}
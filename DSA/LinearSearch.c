#include<stdio.h>

int i;

void lin_srch(int a[],int n,int key)

{
    int count=0;
    for(i=0;i<n;i++)
    {

    
    if(a[i]==key){
        printf("The element %d is present at %d position\n ",key,i+1);
        count =count+1;

    }
    }
if (count==0)

    printf("The element is not present");

}

int main()
{

int n,key;
n=5;

int a[]={1,3,5,4,6};
key = 6;
lin_srch(a,n,key);

key = 3;
lin_srch(a,n,key);

key = 2;
lin_srch(a,n,key);

key = 4;
lin_srch(a,n,key);
lin_srch(a,n,1);


return 0;

}
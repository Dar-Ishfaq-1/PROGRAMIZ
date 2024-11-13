#include <stdio.h>

int main()
{
    int a[5],i,key,flag=0,pos=0;
    for(i=0;i<5;i++){

    
    printf(" Enter  the element : ");
    scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched : ");
    scanf("%d",&key);
    
    for(i=0;i<5;i++){
    if(a[i]==key)
    {
        pos=i+1;
        flag=1;
        break;
    }
    }
    if(flag==1){
    printf("\n The element is present at position %d ",pos);
    }
    else{
    printf("The element is not found ");
    }
    return 0;
}



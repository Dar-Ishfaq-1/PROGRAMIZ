
#include<stdio.h>

int main(){

    int key,i,rep,found;
    int  a[] = {1,2,3,4,5};

    printf("The given array is : ");
    {
    for(i=0;i<5;i++)
    printf("\t %d",a[i]);

    }
    

    printf("\nEnter the element to replace: ");
    scanf("%d",&key);


    for(i=0;i<5;i++){
        if (key == a[i]){

        printf("Enter the element to replace  %d with \n",key);
        scanf("%d",&rep);

        a[i] = rep;
        found = 0;
        break;
    }

}
printf("The array after the change : ");

for(i=0;i<5;i++)
printf("\t %d",a[i]);






return 0;
}
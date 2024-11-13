#include <stdio.h>
int main(){
int Array[5],i;
for(i=0;i<=4;i++){
printf("Enter the Elements : ");
scanf("%d",&Array[i]);
}


printf("The rray Elements are : ");
for(i=0;i<=4;i++){
printf(" %d",Array[i]);
}
return 0;
}

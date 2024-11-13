// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    char a[50],b[50];
    int i,j;
    
    printf("\n Enter the string ");
    fgets(a,sizeof(a),stdin);
    j=0;
    

   for(i = strlen(a)-1;i>=0;i--){
    b[j]=a[i];
    j++;
}
     b[j]='\0';
printf(" The reversed string is %s",b);
    return 0;
}
// Online C compiler to run C program online
#include <stdio.h>

int main() {
int i;
char a[30],b[25];
printf("\n Enter the string 1 : ");
fgets(a,sizeof(a),stdin);
//i=0;
//while(a[i]!='\0')
for(i=0;a[i]!='\0';i++)
{
b[i]=a[i];
//i++;
}
b[i]='\0';
printf("\n The copied string is %s",b);

    return 0;
}
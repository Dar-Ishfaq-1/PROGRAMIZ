#include <stdio.h>

int main() {
    char a[30];

    int i;
    printf("Enter the name : ");
    fgets(a,sizeof(a),stdin);
    i=0;
    while(a[i]!='\0')
{
    printf("\n%c",a[i]);
    i++;
}
    return 0;
}

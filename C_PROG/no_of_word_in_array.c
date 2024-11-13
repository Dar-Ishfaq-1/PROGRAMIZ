#include <stdio.h>

int main()
int a[100],i,word=1;
for(i=0;i<100;i++){
printf("Enter the string : ")

fgets(a,sizeof(a),stdin);
for(i=0;i<100;i++)
}
if(a[i]==' '&& i+1!=' ')

word++;
printf("\n The number of words in the string is : %d",word);
return 0;
}
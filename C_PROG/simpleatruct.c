#include <stdio.h>

struct myclass { 
char mychar;
int mynum;
   };
   

int main() {
 struct myclass s1;
 
 s1.mychar='@';
 s1.mynum= 9;
 
  
  printf("my letter  is  %c and my numbe is %d",s1.mychar,s1.mynum);
  return 0;
}
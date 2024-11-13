#include <stdio.h>
#include <string.h>
struct class {
  char mychar[23];
  int mynum;
  };
  
   int main() {
   struct class s1;
   
  strcpy( s1.mychar,"Sidra");
   s1.mynum = 6;
   
    printf("My name  is %s and My Rollno is %d",s1.mychar,s1.mynum);
    
  return 0;
}
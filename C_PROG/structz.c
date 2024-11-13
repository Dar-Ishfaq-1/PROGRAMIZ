#include <stdio.h>
struct 
mystructz{
    int mynum;
    char myletter;

    
};
int main(){

    struct  mystructz s1;
    s1.myletter='W';
    s1.mynum=5;
    printf("MY LETTER IS %c\n",s1.myletter);
    printf("MY NUMBER IS %d",s1.mynum);
    
 return 0;   
    
}
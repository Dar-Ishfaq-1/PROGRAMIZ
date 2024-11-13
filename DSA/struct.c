#include<stdio.h>
#include<string.h>

struct Mystruct{

    int MyNum;
    char MyLetter;
    char MyString[34];
};


int main() {

    struct Mystruct s1;
    s1.MyNum = 2;
    s1.MyLetter = 'S';
    strcpy(s1.MyString ,"my name");


    printf("%d\n",s1.MyNum);    
    printf("%c\n",s1.MyLetter);
    printf("%s\n",s1.MyString);
    






    return 0;
}
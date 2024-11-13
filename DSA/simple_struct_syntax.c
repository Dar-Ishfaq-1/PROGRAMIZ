#include<stdio.h>
#include<string.h>

struct Mystruct{

    int MyNum;
    char MyLetter;
    char MyName[34];
};


int main() {

    struct Mystruct s1 = {4,'S',"Ashfaq Ahmad"};
    printf("%d %c %s",s1.MyNum,s1.MyLetter,s1.MyName);
    






    return 0;
}
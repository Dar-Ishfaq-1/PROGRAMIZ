#include <stdio.h>

int main() {
int b, a=5;
b=a;
printf("b=%d\n",b);
b*=a;
printf("b=%d\n",b);
a/=b;
printf("b=%d\n",b);


    return 0;
}
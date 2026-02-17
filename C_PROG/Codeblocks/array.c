#include<stdio.h>

int main()

{
    int size;
    int a[] = {1,3,2,5,4,3,6,5};
    size = sizeof(a)/sizeof(a[0]);
    printf("%d",size);
    return 0;
}

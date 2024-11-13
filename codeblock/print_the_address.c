#include<stdio.h>

int main(){


int x = 6;

printf("The address of the variable is %p\n",&x); //&x--> is referred as pointer that is a variable storing address of a variable as its value .

int* ptrr = &x;

printf("%p\n",ptrr);

printf("%d",*ptrr);

return 0;



}

/*A pointer is a variable that stores the memory address of another variable as its value.

A pointer variable points to a data type (like int) of the same type, and is created with the * operator.

The address of the variable you are working with is assigned to the pointer:

Example
int myAge = 43;     // An int variable
int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

// Output the value of myAge (43)
printf("%d\n", myAge);

// Output the memory address of myAge (0x7ffe5367e044)
printf("%p\n", &myAge);

// Output the memory address of myAge with the pointer (0x7ffe5367e044)
printf("%p\n", ptr);
*/

#include<stdio.h>

int main() {
  printf("Prashant\nJain\n");
  printf("Prashant\tJain\n");
  printf("Prashant\bJain\n"); 
  //\b is the backspace escape character.
  // It moves the cursor one position back,
  // effectively deleting the last character printed before it.
  printf("Prashant \"Jain\"");
}
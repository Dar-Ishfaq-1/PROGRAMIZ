#include<stdio.h>
#include<conio.h>

// Declare arrays and variables
int LIST[20];
int LIST1[20];
int HEAD;

// Function declaration
void MULT(int);

// Main function
void main() {
    int PTR;  // Correct the datatype
    clrscr();  // Clear screen
    
    // Initialize LIST and LIST1 arrays
    LIST[0] = 55;
    LIST[2] = 15;
    LIST[3] = 20;
    LIST[5] = 65;
    LIST[7] = 35;
    LIST[8] = 66;
    LIST[9] = 12;
    LIST[11] = 6;
    LIST[13] = 75;
    LIST[14] = 80;
    LIST[16] = 79;
    LIST[18] = 39;

    LIST1[0] = 3;
    LIST1[2] = 13;
    LIST1[3] = 2;
    LIST1[5] = 8;
    LIST1[7] = 14;
    LIST1[8] = 9;
    LIST1[9] = 18;
    LIST1[11] = 16;
    LIST1[13] = 5;
    LIST1[14] = -1;
    LIST1[16] = 0;
    LIST1[18] = 7;

    HEAD = 11;
    PTR = HEAD;

    printf("Initially entered list\n");
    // Traversing the list before modification
    while (PTR != -1) {
        printf("%d\t", LIST[PTR]);
        PTR = LIST1[PTR];
    }

    PTR = HEAD;
    // Modifying the list by multiplying each element by 10
    while (PTR != -1) {
        MULT(PTR);
        PTR = LIST1[PTR];
    }

    PTR = HEAD;
    printf("\n\nList after traversal:\n");
    // Traversing the list after modification
    while (PTR != -1) {
        printf("%d\t", LIST[PTR]);
        PTR = LIST1[PTR];
    }

    getch();  // Wait for user input to close the program
}

// MULT function to multiply elements by 10
void MULT(int p1) {
    LIST[p1] = LIST[p1] * 10;
}

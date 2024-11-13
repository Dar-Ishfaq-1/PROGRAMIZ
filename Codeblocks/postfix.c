#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<conio.h>

// Function to return precedence of operators
int prec(char c) {
    if (c == '^')
	return 3;
    else if (c == '/' || c == '*')
	return 2;
    else if (c == '+' || c == '-')
	return 1;
    else
	return -1;
}


// The main function to convert infix expression to postfix expression
int main() {
//    clrscr();
    char s[] ="a+b*c^3";
    char result[1000];
    int ri= 0;
    int len = strlen(s);
    char stack[1000];
    int st= -1;

    for (int i = 0; i < len; i++)
    { 	char c = s[i];
	// If the scanned character is an operand, add it to the output string.
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
	  s[ri++] = c;
	// If the scanned character is an starting bracket, push it to the stack.
	else if (c == '(' )
	  stack[++st] = c;
	// If the scanned character is an closing bracket pop until starting bracket is popped & put in postfix without brackets.
	else if (c == ')')
	 { while (stack[st] != '(')
	    {s[ri++] = stack[st--];}
	     st--; // Pop '('
	 }
	// If an operator is scanned & has higher precedence that stack symbol
	else
	  {while(st>=0 && (prec(s[i])<=prec(stack[st])))
	    { if(c!='^')
		  s[ri++]=stack[st--];
	      else
		 break;
	    }
	    stack[++st]=c;
	  }

	}
	while(st>=0)
	   {s[ri++]=stack[st--]; }
	s[ri] = '\0';
	printf("\n%s\n", s);
	getch();
}

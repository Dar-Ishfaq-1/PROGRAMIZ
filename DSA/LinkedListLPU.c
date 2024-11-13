#include<stdio.h>
struct new_list
{ 
    int value;
    struct new_list *next_element;
} n1, n2, n3, n4; // Creates four nodes of type new_list

void main()
{ 
    int j;

    // Assigning values to nodes
    n1.value = 10; 
    n2.value = 20; 
    n3.value = 30; 
    n4.value = 40; 

    // Linking the nodes to form a singly linked list
    n1.next_element = &n2; 
    n2.next_element = &n3; 
    n3.next_element = &n4; 
    n4.next_element = 0; // Indicating the end of the list

    // Accessing the value of n2 through n1
    j = n1.next_element->value; 
    printf("%d\n", j); // Printing the value of n2 (400)

    // Printing the values of nodes through their next_element pointers
    printf("%d\n", n1.next_element->value); // Prints 400 (n2)
    printf("%d\n", n4.next_element);        // Prints 0 (n4 points to NULL)
    printf("%d\n", n2.next_element->value); // Prints 600 (n3)
    printf("%d\n", n3.next_element->value); // Prints 800 (n4)
}


// data variable named value to store data and a pointer variable named
// next_element to point to next node.

// In this example:
// 2. Then, four objects namely, n1, n2, n3, and n4 are created to access the
// structure elements. In the program they act as nodes in a list.
// 3. In the main() function, the value for the four nodes n1, n2, n3, and n4 are
// assigned.
// 4. Then, the address of n2 is stored in n1, address of n3 is stored in n2, and
// address of n4 is stored in n3. The address of n4 is assigned zero to
// indicates the end of the list.
// 5. Finally, the value present in n1, n4, n2 and n3 are printed.*/
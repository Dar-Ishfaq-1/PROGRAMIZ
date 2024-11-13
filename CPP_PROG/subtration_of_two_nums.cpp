#include <iostream>
using namespace std;

// Function prototype
void sub(int, int);

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    // Calling the sub function with arguments 7 and 4
    sub(a, b);
    
    return 0;
}

// Function definition
void sub(int a, int b) {
    int c;
    c = a - b;
    cout << "The subtraction of " << a << " and " << b  << " is :  "<< c << endl; 
     
}


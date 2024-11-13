#include <iostream>
using namespace std;

void add(int a = 10, int b = 5);

int main() {
    int a,b;

    
    add();  
    add(7);     
    add(6, 9);  

    return 0;
}


void add(int a, int b) {
    int sum;
    sum =a+b;
    
    cout << "The sum of the numbers is: " << sum << endl;
}

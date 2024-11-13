#include <iostream>
using namespace std;
void sum(int a,int b){


cout << "The sum of " << a << " and "  << b << " is "<< a+b << endl;
}
int main(){
    int a,b;
cout << " Enter the first number ";

cin >> a;
cout << " Enter the second number ";
cin >> b;

sum(a,b);

    return 0;
}
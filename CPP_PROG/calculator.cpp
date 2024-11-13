#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter first number : ";
    cin>>a;
    int b;
    cout<<"Enter second number : ";
    cin>>b;
    char op ;
    cout<<"Enter among these operators (%,*,-,+,/) : "<<endl ;

    cout<<"Enter operator : ";
    cin>>op;

if(op=='+')cout<< "The addition  of " <<a<<  " and " <<b<< " is : "<<a+b;

if(op=='-')cout<< "The subtraction of " <<a<<  " and " <<b<< " is : " << a-b;

if(op=='/')cout<< "The division  of " <<a<<  " and " <<b<< " is : "<< a/b;

if(op=='%')cout<< "The modulo of " <<a<<  " and " <<b<< " is : "<< a%b;

if(op=='*')cout<< "The multiplication of " <<a<<  " and " <<b<< " is : "<< a*b;



    
    return 0;
}
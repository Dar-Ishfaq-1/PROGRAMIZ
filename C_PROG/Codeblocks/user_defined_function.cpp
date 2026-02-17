#include<iostream>
using namespace std;

int fun(int a,int b ) {

return a+b;

}

int main(){
    int a,b,sum;
    a=7,b=9;

sum = fun(a,b);


cout<<"The sum of  " <<a<< " and " <<b<< " is : "<<sum<<endl;

return 0;}

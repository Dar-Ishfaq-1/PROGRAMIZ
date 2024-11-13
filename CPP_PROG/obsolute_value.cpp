#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    if(n<0) n= -n;
    cout<<"The obsolute value of given num is : "<<n;

    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
cout<<"Enter the age of a : ";
cin>>a;

cout<<"Enter the age of b : ";
cin>>b;

cout<<"Enter the age of c : ";
cin>>c;
if(a==b && b==c){
cout<<" a,b and c are of same age ";
}
if(a<b && b<c)
cout<<"a is the youngest ";

if(b>c && c>a)
cout<<"b is the youngest ";

else 
cout<<"c is youngest ";


    
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
int a,b,c,d,e,total;
float per;

cout<<"Enter the marks of the subjects :";
cin>>a>>b>>c>>d>>e;
total=a+b+c+d+e;
per = total*100/500;
cout<<"The percentage of marks is : "<<per;
return 0;

 
}
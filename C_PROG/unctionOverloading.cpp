#include<iostream>
#include<string>
using namespace std;

int myfun(int a,int b)
{
    
    //cout<<a+b<<"\n";
    return a+b;
}
float myfun(float a,int b)
{
   
    // cout<<a+b<<"\n";
    return a+b;
    
}
float myfun(float a,float b)
{
    //    cout<<a+b;

    return a+b;
}

int main()
{
   
   int A;
float B;
float C;
A=myfun(2,5);
cout<<A<<"\n";


float x= 2.3;
int z= 10;
B=myfun(x,z);
cout<<B<<"\n";

float s=3.3;

 C=myfun(x,s);
cout<<C<<"\n";

return 0;
}

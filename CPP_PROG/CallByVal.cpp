#include<iostream>
using std ::cout;
using std ::endl;
void swap(int,int);
int main()
{
  
  int x=5, y=7; 
swap(x, y); 
cout<<"x:"<<x<<"y:"<<y<<endl; 
return 0;
} 
void swap(int a, int b) 
{ 
int t=a; 
a=b; 
b=t; 
cout<<"x:"<<a<<"y:"<<b; 
}
    

#include<iostream>
#include<string>
using namespace std;

int myfun(int a,int b){
    
    return a+b;
}
float myfun(float a,int b){
   
    return a+b;
    
}

float myfun(float a,float b){
    
    
    return a+b;
    
}

int main()
{
    int result1;
    float result2;
    float result3;
    
    
result1=myfun(2,5);
cout<<result1<<"\n";
result2=myfun(2.4,5);
cout<<result2<<"\n";
result3=myfun(2.4,5.4);
cout<<result3<<"\n";





    return 0;
}
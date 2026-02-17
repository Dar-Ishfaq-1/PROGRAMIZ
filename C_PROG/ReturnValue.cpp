#include<iostream>
#include<string>
using namespace std;
int myfun(int a,int b)
{
    int result = 0;
    result = a+b;
    
    return result;
}




int main()
{
    int final;
    final = myfun(2,5);
    cout<<final<<endl;



    return 0;
}
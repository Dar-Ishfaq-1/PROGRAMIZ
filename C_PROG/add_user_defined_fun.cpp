#include <iostream>
using namespace std;
void add(void);
int main()
{
    add();
return 0;
}
void add(){
    int a,b,sum;
    cout<<"Enter the values of a :";
    cin>>a;
    cout<<"Enter the values of b :";
    cin>>b;
    sum=a+b;
    cout<<"The sum of " << a<< " and "<<b<<" is : "   <<sum<<endl;

}
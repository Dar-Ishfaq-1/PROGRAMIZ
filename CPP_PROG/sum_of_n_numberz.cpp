
#include <iostream>
using namespace std;

int main()
{
int i,n,sum=0;

cout<<"Enter the number : ";
cin>>n;
i=1;
do
{
    sum=sum+i;
    i++;

}while(i<=n);
cout<<"The sum of first " <<n<< " natural numbers = " <<sum;
return 0;

}
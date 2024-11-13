#include <iostream>
using namespace std;
int n,sum=0;
main(){
cout<<"Enter the number whose sum is required :";
cin>>n;

while(n>0)
{
    sum=sum+n%10;
   n = n/10;
}
cout<<"The sum of digits = "<<sum;
return 0;
}
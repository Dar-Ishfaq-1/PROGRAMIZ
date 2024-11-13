#include <iostream>
using namespace std;
int main()
{

    int i,n,sum=0;
    cout<<"Enter the number : ";
    cin>>n;
    i=0;
    while(i<=n) 
    {
       sum=sum+i;
       i++;
      
    }
 cout<<"The sum of first "<<n<< "numbers is : "<<sum;
return 0;
}
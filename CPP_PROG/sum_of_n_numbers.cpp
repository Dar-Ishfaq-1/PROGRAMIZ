#include <iostream>
using namespace std;
int main()

{
    int i,n,sum;
    sum=0;
    cout<<"Enter the number : ";
    cin>>n;
    i=0;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout<<"The sum of first " <<n<<  " numbers = "<<sum;
    return 0;

}
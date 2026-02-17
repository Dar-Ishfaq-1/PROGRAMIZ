#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

  cout<<"outside main  function value of a  is  " <<a << " and value of b is  "<<b<<endl;
}
    

int main()
{

    int a = 4;

    int b = 7;

    swap(a,b);
    cout<<"inside main  function value of a  is  " <<a << " and value of b is  "<<b<<endl;
    



    return 0;
}
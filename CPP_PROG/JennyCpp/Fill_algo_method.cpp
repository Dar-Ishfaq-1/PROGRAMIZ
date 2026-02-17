#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
cout<<"\nThe fill algorithm method ";

    vector<int> num1(10);
    fill(num1.begin(),num1.end(),5);

    
    for(int i =0;i<num1.size();i++)
    {
        cout<<num1[i]<<" ";
    }

    return 0;
}
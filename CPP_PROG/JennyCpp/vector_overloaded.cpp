#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> num(10,3);
    
    for(int i =0;i<9;i++)
    //for(int i =0;i<num.size();i++)
    {
        cout<<num[i]<<" ";
    }

    //fill algorithm method 
    cout<<"\nThe fill algorithm method ";

    vector<int> num1(10);
    fill(num1.begin(),num1.end(),5);

    
    for(int i =0;i<num1.size();i++)
    {
        cout<<num1[i]<<" ";
    }
    cout<<"\nintializer list method : ";
    vector<int> num2={1,3,2,4,5,4,6,5,7};
     for(int i =0;i<num2.size();i++)
    {
        cout<<num2[i]<<" ";
    }
    cout<<"\nvector intializing vector method : ";


   // vector<int> num2={1,3,2,4,5,4,6,5,7};
    vector<int> num3(num2.begin(),num2.end());
     for(int i =0;i<num3.size();i++)
    {
        cout<<num3[i]<<" ";
    }


    return 0;
}
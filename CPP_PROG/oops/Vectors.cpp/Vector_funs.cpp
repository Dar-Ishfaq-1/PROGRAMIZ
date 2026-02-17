#include<iostream>
#include<vector>
using  std::vector;
using std::cout;
using std::endl;

int main()
{
    vector<int> nums = {1,3,2,4,5};

    cout<<nums.at(3)<<endl;
    
    cout<<"The front of the vector is : " <<nums.front();
    cout<<endl;

    cout<< "THe back element of the vector is : " <<nums.back();
    cout<<endl;
    cout<<"\n";
    //To add elements to vector DS we use push_back(x)
    cout<<"Element at the end before adding element through push_back function. ";
    cout<<nums.back();

    cout<<endl;
    cout<<"\n";
    cout<<"Element at the end after adding element through push_back function. ";
    nums.push_back(33);
    cout<<nums.back();

    cout<<"\n";
    cout<<"Element at the end after removing element through pop_back function. ";
    nums.pop_back();
    cout<<nums.back();


    
    }
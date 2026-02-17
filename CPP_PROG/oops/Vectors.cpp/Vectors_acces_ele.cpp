#include<iostream>
#include<vector>
using  std::vector;
using std::cout;
using std::endl;

int main()
{
    vector<int> nums = {1,3,2,4,5};

    cout<<nums.at(3)<<endl;
    cout<<nums[2]<<endl;
    cout<<"The front of the vector is : " <<nums.front();
    cout<<endl;
    cout<< "THe back element of the vector is : " <<nums.back();
    cout<<endl;

}
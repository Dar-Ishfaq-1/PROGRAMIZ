#include<iostream>
#include<vector>
using  std::vector;
using std::cout;
using std::endl;

int main()
{
    vector<int> nums = {1,3,2,4,5};

    for(int x :nums)
    {
        cout<<x<<"\n";
    }
    return 0;
    }
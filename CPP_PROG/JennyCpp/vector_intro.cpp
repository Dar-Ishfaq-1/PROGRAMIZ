#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{

    vector<int> num;
    num.push_back(4); // s-1 c-1
    num.push_back(3);   // s-2 c-2
    num.push_back(5);   // s-3 c-4
    num.push_back(5);   // s-4 c-4
    num.push_back(5);   // s-5 c-8
                        // s-6 c-8
                        // s-7 c-8
                        // s-8 c-8
                        // s-9 c-16
    

    cout<<"The size of num : "<<num.size()<<endl;
    cout<<"The capacity of num : "<<num.capacity()<<endl;
    
    

    return 0;
}
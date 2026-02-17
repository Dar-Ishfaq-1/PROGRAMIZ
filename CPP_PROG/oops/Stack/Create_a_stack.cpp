#include<iostream>
#include<stack>
using std::cout;

using std::stack;

int main()
{
    stack<int> nums;

    nums.push(5);
    nums.push(2);
    nums.push(5);
    nums.push(7);
    nums.push(9);
    //pop() is a void function and hence cout<<nums.pop(); will through an error
    cout<<"The top element of the stack before using pop() function : ";
    cout<<nums.top();

    cout<<"\n";

    cout<<"The top element of the stack after using pop() function : ";
    nums.pop();
    cout<<nums.top();

    cout<<"\n";

    if(nums.empty())

    cout<<"The stack is empty";

    else 
    cout<<"The stack is not empty";


}
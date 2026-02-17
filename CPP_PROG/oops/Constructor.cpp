#include<iostream>

using std::cout;
using std::endl;

class MyClass
{
    public :
        MyClass()
        {
            cout<<"The constructor gets automatically called when an object is created. ";
        }
        
};
int main()
{
    MyClass obj;

    return 0;

}


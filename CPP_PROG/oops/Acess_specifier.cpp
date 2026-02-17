#include<iostream>

using std::cout;
using std::endl;
using std::string;

class MyClass
{
    public :
    int x;
    private :
    int y;

    
};
int main()
{
    MyClass obj;
    obj.x = 5;  // allowed (b/z public)
    obj.y = 3;  //not allowed (b/z private)

    return 0;

}


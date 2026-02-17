#include<iostream>

using std::cout;
using std::endl;
using std::string;

class MyClass
{
    public :
    string model;
    string brand;
    int year;

    MyClass(string x,string y,int z)
    {
        brand = x;
        model = y;
        year = z;

    }
    
};
int main()
{
    MyClass obj("bmw","X5",2019);
    MyClass obj1("bmw","X7",2020);

    
    cout<<obj.brand<< " " <<obj.model << " " << obj.year<<endl;
    cout<<obj1.brand<< " " <<obj1.model << " " << obj1.year<<endl;

return 0;
}
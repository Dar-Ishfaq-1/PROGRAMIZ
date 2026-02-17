#include<iostream>

using std::cout;
using std::endl;
using std::string;

class MyClass
{
    public :

    string brand = "BMW";
    void Honk()
    {
        cout<<"Teet Teet!!";
    }

};

class MyClass1 : public MyClass
{
    string color = "Red";

};

class MyClass2 : public MyClass1
{
    string model = "1234";

};
int main()
{
    MyClass2 obj;
    obj.Honk();

    return 0;

}


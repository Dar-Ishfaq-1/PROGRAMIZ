#include<iostream>

using std::cout;
using std::endl;
using std::string;

class MyClass
{
    public :
    string brand = "Ford";

    void Honk()
    {

        cout<<" Teet , Teet!! ";
    }
    
};

class  car : public MyClass
    {
        public :
        string model = "mustang" ;

    };
int main()
{
    car myobj;

    myobj.Honk();

    cout<<myobj.brand + " " + myobj.model;


    return 0;

}


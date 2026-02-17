#include<iostream>

using std::cout;
using std::endl;
using std::string;

class MyClass
{
    public :
    string brand = "BMW";

    void myfun()
    {
        cout<<"Teet!! Teet!! ";
    }
    
};

class myclass1 
{
    public :
    string model = "X5";
};


class mulclas : public MyClass,public myclass1
{

};



int main()
{
    mulclas obj;
    obj.myfun();
    cout<<"Brand : " << obj.brand << " " << "Model : " <<obj.model;

    return 0;

}


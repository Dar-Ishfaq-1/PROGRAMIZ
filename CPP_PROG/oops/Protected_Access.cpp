#include<iostream>

using std::cout;
using std::endl;
using std::string;

class MyClass
{
    protected :
    int speed;

};

class D_class : public MyClass
{
    public :
    string color ;

    public :
    void setspeed(int s)
    {
        speed = s;

    }

    int getspeed()
    {
        return speed;
    }

};

int main()
{
    D_class obj;
    cout<<"The car details are : "<<endl ;
    obj.setspeed(200);
    obj.color="Red";
    cout<<"Speed : "<<obj.getspeed()<<endl;;
    cout<<"Color : "<<obj.color<<endl;
    

    return 0;

}


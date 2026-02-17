#include<iostream>

using std::cout;
using std::endl;
class box
{

float len,bred,heig;
public :
    box()
    {

        cout<<"Default Constructor. "<<endl;
        len = 3;
        bred = 4;
        heig = 6;
    }
    box(double l,double b,double h)
    {
        cout<<"Parametrised constructor."<<endl;
        heig = h;
        bred = b;
        len = l;

    }
    void vol()
    {
    cout<<"Volume : "<<len*bred*heig<<endl;
    }
    box(box &obj)
    {
        cout<<"copy constructor"<<endl;
        len = obj.len;
        bred = obj.bred;
        heig = obj.heig;
    }

};

int main()
{
    box obj;
    obj.vol();

    box obj2(4,5,8);
    obj2.vol();

    box obj3(obj);
    obj3.vol();

    box obj4(obj2);
    obj4.vol();
    




    return 0;
}


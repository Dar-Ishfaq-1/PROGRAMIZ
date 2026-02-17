#include<iostream>

using namespace std;


class Rect
{
    float length,breadth;

public:
    Rect(float len,float bred)
    {
        cout<<"Parametric constructor. ";
       length = len;
       breadth = bred;

    }
    void Area()
    {
       cout<<"\nArea of rectangle is : "<< length*breadth;

    }

};
int main()
{
    Rect obj(5,8);
    obj.Area();

    return 0;

}
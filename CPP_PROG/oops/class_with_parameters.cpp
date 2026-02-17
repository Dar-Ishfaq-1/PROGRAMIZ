#include<iostream>

using std::cout;
using std::endl;

class Mycar
{
    public :
    int maxSpeed(int speed);
    

};

int Mycar::maxSpeed(int speed)
{
    return speed;
}

int main()
{

    Mycar obj;

    cout<<"The maximum speed of the car is ";
    int result =obj.maxSpeed(300);
    cout<<result;

}

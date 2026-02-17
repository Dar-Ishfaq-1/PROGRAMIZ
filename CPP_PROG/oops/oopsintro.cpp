#include <iostream>

using std::endl;
using std::cout;
using std::string;


int main()
{
    class mycar
    {

        public :
        int no_seats ;
        string color ;
        int model ;

    };

    mycar obj;

    obj.color = "red";
    obj.model = 1999 ;
    obj.no_seats = 4;

    cout<<"The color of the car is : " << obj.color<<std::endl;
    cout<<"The number of the seats in the car is : "<<obj.no_seats<<endl;
    cout<< "The model of the car is : " <<obj.model;
    return 0;
}


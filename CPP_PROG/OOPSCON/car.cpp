#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;



class Car {
    public :

    string Name ;
    int Seats;
    string Type;

    
};

void print (Car x){
    cout<<x.Name<<" "<<x.Seats<<" "<<x.Type<<endl;

}

int main()
{

    Car c;
    c.Name= "Honda";
    c.Seats = 5;
    c.Type = "Sedan";

Car c2;
    c2.Name= "Maruati swift";
    c2.Seats = 5;
    c2.Type = "HatchBack";

    Car c3;
    c3.Name= "Toyota Fortuner";
    c3.Seats = 5;
    c3.Type = "Suv";

    print(c);
    print(c2);
    print(c3);


    char arr[] = "i am ish";
    cout<<arr;

    return 0;



}
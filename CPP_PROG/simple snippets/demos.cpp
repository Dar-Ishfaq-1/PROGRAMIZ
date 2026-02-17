#include <iostream>
#include<string>

using namespace std;


class cars {
        
    private:

        string color;
        string brand;
        int speed;


    public:

        void setData(string c,string b,int s)
        {

            color = c;
            brand = b;
            speed = s;
           

        }

        void dispData()
        {
            cout<<"The color of the car is :"<<color<<endl;

            cout<<"The model of the car is :"<<brand<<endl;
            
            cout<<"The speed of the car is :" <<speed<<"km/h."<<endl;
            
           
        }
    };

    int main()
    {
        cars car1;
        car1.setData("red","toyota",190);
        car1.dispData();
       

    return 0;
    }
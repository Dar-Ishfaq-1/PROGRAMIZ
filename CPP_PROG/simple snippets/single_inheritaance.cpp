#include <iostream>
#include<string>
using namespace std;



class Animal {
    public:
        int legs;
        string tailed;
        
public:

    void setDogData(int l,string t)
        {
            legs = l;
            tailed = t;
           }

    void dispData()
        {
            cout<<"lags : "<<legs<<endl;
            cout<<"tailed : "<<tailed<<endl;
            
        }
    };

    class Dog : public Animal{
        public :
        string color;
        int weight; 

        void setData(string c, int w)
        {
            color = c;
            weight = w;

        }

       void getData(){

        cout<<"The color of the dog is : "<<color <<endl;
        cout<<"The weight of the dog is : "<<weight <<" kg"<<endl;
        cout<<"The dog has  : "<<legs<<" legs"<<endl;
        cout<<"The dog is tailed. : "<<tailed <<endl;
       }

    };

    int main()
    {
        Dog dog1;
        dog1.setDogData(4,"yes");
        dog1.setData("black",15);
        dog1.getData();
       

    return 0;
    }
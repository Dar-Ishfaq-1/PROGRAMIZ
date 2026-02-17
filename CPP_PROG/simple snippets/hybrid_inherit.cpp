#include <iostream>
#include<string>
using namespace std;

class  person{
    public:
        string color = "white";
        int age = 23;
};

class student : public person{
    public:
       string weight = "68kg.";
};

class teacher : public person,public student {
    public:
    float salary = 250000;

};

class boy : public teacher{
cout<<"i have inerited properties from teacher child class"


};



int main()
{
       
return 0;
}
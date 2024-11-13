#include<iostream>
using namespace std;
//#include<stdlib.h>
#include<string>

class person{
public:
    string name;
    int age;
    string city;

};
int main()
{
    person details;
    details.name ="kamraan";

    details.age = 24;
    details.city = "magam";


cout<<"name ="<<details.name<<"\n";

cout<<"city="<<details.city<<"\n";
cout<<"age="<<details.age<<"\n";

return 0;
}

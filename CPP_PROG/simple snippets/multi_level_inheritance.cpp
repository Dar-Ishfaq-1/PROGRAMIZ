#include <iostream>
#include<string>
using namespace std;

class person{
        
public:
    string name ="Abc.";
    int age = 23;
       
};

class student : public person{

    public :
        int id = 23;
        string qualification = "graduate";

};

class teacher : public student
{
    public:
        float salary = 250000;
        string dept = "CS";
        

};

int main()
{
    teacher t1;
    cout<<"Name : "<<t1.name<<endl;
    cout<<"Age : "<<t1.age<<endl;
    cout<<"Salary  : "<<t1.salary<<endl;
    cout<<"Teacher id  : "<<t1.id<<endl;
    cout<<"Qualification : "<<t1.qualification<<endl;
    
       

return 0;

}
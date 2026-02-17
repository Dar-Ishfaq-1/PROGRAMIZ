#include<iostream>

using std::cout;
using std::endl;
using std::string;

class MyClass
{
    private :

    int salary ;

public : 
    //setter
    void setsalary(int s)
    {

        salary = s;
    }
    //getter
    
    int getsalary()
    {
        return salary;
    }
    
    };
int main()
{
    MyClass obj;

    obj.setsalary(50000);
    cout<<"The salary  is : "<< obj.getsalary();

    return 0;

}


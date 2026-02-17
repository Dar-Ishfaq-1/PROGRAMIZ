#include<iostream>
using std::cout;
using std::endl;

class myClass
    {
        public :

        void myMethod();
    };

    void myClass::myMethod()
    {
        cout<<"This is a outside defnition ";

    };



int  main()
{

myClass obj;
obj.myMethod();



    return 0;
}
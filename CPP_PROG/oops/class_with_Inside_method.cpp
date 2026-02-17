#include<iostream>

using std::cout;
using std::endl;
using std::string;

int main()
{
    class myclass
    {
        public:
        int myAge;
        string myNum = "Ashfaq";
        void myMethod()
        {
            cout<<"Inside method.";
        }
        string MyHeight;


        };
        myclass obj;
        
        obj.MyHeight =  "6.11 ft.";
        cout<<"This is a method call return : ";
        obj.myMethod();
        cout<<endl;
        cout<<"My height is "<<obj.MyHeight<<endl;
        return 0;
}



#include <iostream>
#include<string>
using namespace std;

class Father
{
    public:
    int house = 1;
    string caste = "dar";
    };

    class Mother {
        public:
        string nature = "humble.";
        

    };

    class child : public Father,public Mother
    {
        public:
        string intelligent = "yes";

    };

int main()
{
    child c1;
    cout<<"The child has houses : "<<c1.house <<endl;
    cout<<"The child has caste : "<<c1.caste <<endl;
    cout<<"The child is intelligent : "<<c1.intelligent<<endl;
    //cout<<"The child nature is  : "<<nature<<endl;
       

return 0;

}
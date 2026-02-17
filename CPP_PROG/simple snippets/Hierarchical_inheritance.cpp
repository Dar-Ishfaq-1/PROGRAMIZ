#include <iostream>
#include<string>
using namespace std;

class Father{
    public:
    string nature = "calm.";
    string behaviour = "kind.";  
};

class Daughter: public Father{
    public:
        string SkinColor = "black.";

};

class Son : public Father{
    public:
        string Height = "5.11 in.";

};



int main()
{
   Son s1;
   Daughter d1;

   cout<<"The  daughter : "<<endl;
   cout<<d1.nature<<endl;
   cout<<d1.behaviour<<endl;
   cout<<d1.SkinColor<<endl;

 cout<<"The son : "<<endl;
   cout<<s1.nature<<endl;
   cout<<s1.behaviour<<endl;
   cout<<s1.Height<<endl;


return 0;

}
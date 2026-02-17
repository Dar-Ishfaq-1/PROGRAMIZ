#include <iostream>
#include<string>
using namespace std;

class Animal {

        
public:
void eat()
{
    cout<<"The animal can eat."<<endl;
}
  
};

class Cow : public Animal
{
    public:
    void walk(){
        cout<<"The cow can walk."<<endl;
    }
    
}; 


int main()
{
    Cow cow1;

    cow1.walk();
    cow1.eat();
       

return 0;

}
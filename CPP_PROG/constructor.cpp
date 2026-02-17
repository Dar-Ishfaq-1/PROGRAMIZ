#include<iostream>
using namespace std;

class box 

{
double len,bred,heg;

public:
        box()
{
    
    
        cout<<"\n Default Constructor." ;
        len = 2;
        bred= 6;
        heg = 8;
    
}
    void calvol()
    {
        cout <<"\nVolume : "<<len*bred*heg;
    }


};
int main()
{
box obj;
obj.calvol();
return 0;

}



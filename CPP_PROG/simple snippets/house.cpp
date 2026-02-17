#include <iostream>
#include<string>

using namespace std;



class house {
        
    private:
       int length= 0, breadth = 0;
       public:
    
        void setData(int l,int b)
        {
            length = l;
            breadth = b;
           

        }

        void dispArea()
        {
            cout<<"Area of a house is : "<<length*breadth;
            
        }
    };

    int main()
    {
        house h1;
        h1.setData(300,500);
        h1.dispArea();
       

    return 0;
    }
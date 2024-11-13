#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the quad points : "<<a<<b;
    cin>>a>>b;

    if(a>0 && b>0)
    
        cout<<"First quadrant";

    else if(a<0 && b>0)
    
        cout<<"second quadrant";

    else if(a<0 && b<0)
    
        cout<<"Third quadrant";
            
    
    else 
        cout<<"Fourth quadrant";

    return 0;


}
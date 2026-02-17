#include<iostream>

using namespace std;


    class box
    {
        float length,width,height;
    public:
        box()
        {
            length = 4;
            width = 5;
            height = 9;
        }
        void volume()
        {
            cout<<"The volume : "<<length*width*height<<endl;
        }

    };
int main()
{
    box obj;
    obj.volume();
    
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int l,b,per,area;
    cout<<"Enter the length of a rectangle : ";
    cin>>l;
    cout<<endl;

    cout<<"Enter the breadth of a rectangle : ";
    cin>>b;
cout<<endl;
    area = l*b;
        cout<<" The area of a rectangle is  "<<area;
    cout<<endl;
    per = 2*l*b;
            cout<<" The perimeter of a rectangle is  "<<per;
            cout<<endl;
            if(per>area)
            cout<<"The perimeter is greater than area ";
            cout<<endl;

            if(per<area)
            cout<<"The area is greater perimeter  ";





    


    return 0;
}
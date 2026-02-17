#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;



class Student {
    public :
 string name;
 int Rno ;
 float Height;

};


int main()
{
    Student s;
    s.name="moeed";
    //s.Rno = 23;
    s.Height=5.10;
    cin>>s.Rno;
    cout<<"Height. "<<s.Height <<"\n Rool no. "<<s.Rno<<"\n Name "<<s.name<<endl; 



    return 0;



}
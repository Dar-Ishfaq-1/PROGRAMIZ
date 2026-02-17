#include<iostream>
#include<string>
using namespace std;

void myfun(string country = "Afghanistan\n")
{
    cout<<"My country name is "<< country;
}


int main()
{

myfun();
myfun("turkey");



    return 0;
}
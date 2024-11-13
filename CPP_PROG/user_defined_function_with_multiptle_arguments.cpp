#include<iostream>
using namespace std;

void myfun(string fname = "unknown",int age = 25)
{

    cout<<fname<<" Ahmad "<<age<<" years old. "<<endl;
}
int main(){

myfun(,23);
myfun("Kamraan ",24);
myfun("Moeed ");

    return 0;
}

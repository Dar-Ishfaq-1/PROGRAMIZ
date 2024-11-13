
#include <iostream>
using namespace std;


int main() {
    int a,b,c,total,per;
    cout<<" Enter the marks of the subjects : ";
    cin >>a>>b>>c;
    total = a+b+c;
    per= total*100/300;
    cout <<"\n Total marks obtained  : "<<total;
    cout <<"\n Percentage = "<<per;
    

    return 0;
}

#include <iostream>
#include <cstring>
using namespace std;

int main(){

string name = "Ishfaq";
cout<<&name<<endl;
string * ptnr =&name;
cout<<ptnr<<endl;
cout<<*ptnr<<endl; //getting the value using *(dereference)
//using pointer to change the value 
*ptnr = "kamraan";
cout<<name<<endl;
return 0;

}
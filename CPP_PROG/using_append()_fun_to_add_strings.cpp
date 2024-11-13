#include <iostream>
#include <string>

using namespace std;

int main(){

string firstname = "ishfaq";

string middlename = "ahmad";

string lastname = "dar"; 

string fullname = firstname.append(" ").append(middlename).append(" ").append(lastname);
cout<<fullname<<endl;
return 0;



}
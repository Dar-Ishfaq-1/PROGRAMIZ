#include<iostream>
using namespace std;


int main(){
string firstName = "Ashfaq";
string middleName = "Ahmad";
string   lastName = "Dar";
string  fullName = firstName.append(" ").append(middleName).append(" ").append(lastName);
cout<<fullName;

    return 0;
}

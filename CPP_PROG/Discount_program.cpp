#include <iostream>
using namespace std;
int main() {

int amount,discount ,dis;

cout<<"Enter the total purchased amount : ";
cin>>amount;
cout<<"Enter the discount :";
cin>>dis;

discount=amount*dis/100;
cout<<"Total purchase : "<<amount<<endl;
cout<<"Total discount:"<<discount<<endl;
cout<<"Payable amount : "<<amount-discount;
return 0;
}
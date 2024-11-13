#include <iostream>
using namespace std;
int main(){
int n,prdt=1;
cout<<"Enter the num : ";
cin>>n;
for(; n>0; n=n/10){
prdt=prdt*(n%10);


}
cout<<"the product of the digits of a given number is : "<<prdt;
return 0;
}

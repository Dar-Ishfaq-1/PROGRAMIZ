// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void sub(int ,int);

 int main()
 {
     int  a,b;
     cout <<" Enter two numsbers : ";
     cin >>a>>b;
     
  sub(a,b);
  return 0;
 }
 
 void sub(int a,int b)
 {
     int c ;
     c=a-b;
     cout << "The subtration of " <<a<< "  and  "<<b<< " is : " <<c<<endl;
     
 }

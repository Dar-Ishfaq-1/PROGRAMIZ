#include <iostream.h>
using namespace std;
void grts(int,int,int);

 int main()
 {

int a,b,c;
cout << " Enter thre nums : ";
cin >>a>>b>>c;
grt(a,b,c);
return 0;

 }

 void grt(int a,int b, int c);
 {
   if(a>b && a>c)
    cout <<"The greatest number is : "<<a<<endl;

    else if ( b>a && b>c)

    cout << " The greatest num is : "<<b<<endl;


  
   else 
   cout <<" The greatest num is : "<<c<<;
    
   

 }
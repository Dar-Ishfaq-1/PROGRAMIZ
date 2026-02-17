#include<iostream>
#include<string>

/*using std::cin;
using std::cout;
using std::endl;*/


int main()
{
  const int a = 10;
  std::cout<<"the vaue of a is "<<a;
  std::cout<<std::endl;

  // cont string str = "Moeed Kamraan";
  //the above ststement is showing error
  // although we have added string header 
  //file to print the vale we need to add 
  //std:: before string as shown below.

  std::string str = "Moeed kamraan";
  std::cout<<"the string  is "<<str;
   std::cout<<std::endl;



  /*a = 4;
  std::cout<<"the vaue of a is "<<a;
  the second assignment of a is showing error b/z it is readable
   only and non modifiable*/
   int main = 7;
   std::cout<<"the value of main is  "<<main;


  return 0;  
}
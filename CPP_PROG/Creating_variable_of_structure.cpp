#include <iostream>
#include <string>
using namespace std;

int main() {
  struct Model{
    string brand;
    string model;
    int year;
  } ; 
  //creating structure variable using structure name as data type..
  
  Model mycar;

  // Put data into the first structure
  cout<<"I have two cars "<<endl;
  mycar.brand = "BMW";
  mycar.model = "X5";
  mycar.year = 1999;
  Model mycar2;
  // Put data into the second structure
  mycar2.brand = "Ford";
  mycar2.model = "Mustang";
  mycar2.year = 1969;

  // Print the structure members
  cout<<"1. My first car :"<<endl;
  cout << "                  brand : "<<mycar.brand  <<", model : "<< mycar.model << ", year of launch : " << mycar.year << ".\n";
  
  cout<<"2. My second car :"<<endl;
  cout << "                  brand : "<<mycar2.brand  <<" , model : "<< mycar2.model << ", year of launch : " << mycar2.year << ".\n";
  return 0;
}
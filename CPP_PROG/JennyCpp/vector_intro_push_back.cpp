#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    //declaration
    vector<int> numbers;
    //push method
    /*numbers.push_back(7);
    numbers.push_back(17);
    numbers.push_back(73);

    cout<<numbers[0];
    cout<<endl;
    cout<<numbers[5];
    */

   int val;
   cout<<"Enter the number : ";
   for (int i =0;i<5;i++)
   {
    cin>>val;
    numbers.push_back(val);

   }
   cout<<"The values stored in vector are : ";
   for(int i =0;i<4;i++)
   {
     cout<<numbers[i];
     cout<<" ";

   }
  cout<<"The size of vector is "<<numbers.size();
  cout<<"The capacity of vector is "<<numbers.capacity();



    return 0;
}
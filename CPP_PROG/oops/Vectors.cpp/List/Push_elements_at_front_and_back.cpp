#include<list>
#include<iostream>
using std::cout;
using std::endl;
using std::list;

int main()
{
list<char> alpha = {'1','A','%'};
// for(char x:alpha)
// {
//     cout<<x;
//     cout<<"\n";
// }
//change the front of list.
cout<<"The front before changing front value : "<<alpha.front();
cout<<"\n";
alpha.front() = 'F';
cout<<"The front after changing front value : "<<alpha.front();

cout<<"\n";

cout<<"The back before changing end value : "<<alpha.back();
cout<<"\n";
alpha.back() = '*';
cout<<"The back after changing back value : "<<alpha.back();
cout<<"\n";
// for(char x:alpha)
// {
//     cout<<x;
//     cout<<"\n";
// }

return 0;

}

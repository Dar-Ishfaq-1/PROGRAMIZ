#include<list>
#include<iostream>
using std::cout;
using std::endl;
using std::list;

int main()
{
list<char> alpha = {'1','A','%'};
//change the front of list.
cout<<"The front before changing front value : "<<alpha.front();
cout<<"\n";
alpha.front() = 'F';
cout<<"The front after changing front value : "<<alpha.front();

return 0;

}

#include<list>
#include<iostream>
using std::cout;
using std::endl;
using std::list;

int main()
{
list<char> alpha = {'1','A','%'};
for(char x:alpha)
{
    cout<<x;
    cout<<endl;
}

return 0;

}

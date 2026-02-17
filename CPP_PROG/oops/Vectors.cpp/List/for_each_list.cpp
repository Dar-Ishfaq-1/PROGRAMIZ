#include<iostream>
#include<list>
using std::list;
using std::cout;
using std::endl;

int main()
{
    list<char> alpha = {'a','e','q','r'};
    for(char x:alpha)
    {
        cout<<x<<"\n";
    }

    return 0;
}
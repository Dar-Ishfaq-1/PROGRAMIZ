#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<bool> bol(10);
    fill(bol.begin(),bol.end(),0);
    for(int i=0;i<bol.size();i++)
    {
        cout<<bol[i];
        cout<<" ";
    }

    return 0;
}
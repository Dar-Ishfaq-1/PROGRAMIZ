
#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"Enter the cost price : ";
    cin>>cp;
    cout<<"Enter the selling price : ";
    cin>>sp;
    if(cp==sp)
    cout<<"The seller has made neither a  profit nor a loss. ";

    else if(cp<sp)
        cout<<"The seller has made a  profit of : "<< sp-cp;
        
      else  if(cp>sp)
        cout<<"The seller has made a  loss of : "<< cp-sp;
        
    


    return 0;
}


    
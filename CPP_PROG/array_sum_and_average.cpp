#include<iostream>
using namespace std;


int main(){
    int arr[]={56,34,43,23,32,12,21};

    int num = sizeof(arr)/sizeof(arr[1]);

    int i,sum=0;

    for(i=0;i<num;i++)
    {
sum+=arr[i];


    }
    cout<<endl;
    cout<<endl;
    

cout<<"The sum of the ages is : "<<sum<<endl;

cout<<endl;
    
    cout<<endl;
    


    return 0;
}

#include<iostream>
using namespace std;
int main(){

     int n,m,i;
     cout<<"Enter the number whose table u want to print : ";
     cin>>n;
     cout<<"Enter the range upto which you want to print table : ";
     cin>>m;
     for(i=n;i<=m;i+=n){
        if(i%n==0)
        cout<<i<<" ";
     }



    
    return 0;
}
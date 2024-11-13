#include<iostream>
using namespace std;


int main(){


int arr[]={1,4,6,8,4,2};
//cout<<sizeof(arr);
int size=sizeof(arr)/sizeof(arr[4]);
cout<<"The number of elements in the array is : "<< size<<endl;
int i;
cout<<"The elements of the array are : ";
for(i=0;i<size;i++)
{

cout<<arr[i]<<" ";

}


    return 0;
}


#include <iostream>
using namespace std;
int main() {
int arr[] = {20, 22, 18, 35, 48, 26, 87, 70};
int i,av_age,sum=0;


int len = sizeof(arr)/sizeof(arr[0]);

for(i=0;i<len;i++){
    
    sum+=arr[i];
    
}
cout<< sum<<"\n";

 av_age = sum/len;
 cout<<"The average age is : "<<av_age;
    return 0;
}
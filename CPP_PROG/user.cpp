
#include <iostream>
using namespace std;
int main() {
int arr[] = {1,3,2,4,6,5};
int len = sizeof(arr)/sizeof(arr[0]);
int i;
for(i=0;i<len;i++){
    cout<<arr[i]<<"\n";
    
}

    return 0;
}
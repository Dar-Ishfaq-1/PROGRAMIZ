#include<iostream>
using namespace std;


int main(){
int i,j;
   int mat[2][3]={{1,2,3},{4,5,6}};
    cout<<"The elements of the array are : "<<endl;

    for(i=0;i<2;i++){

        for(j=0;j<3;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<< endl;
    }


    return 0;
}

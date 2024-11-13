#include<iostream>
using namespace std;


int main(){
    int row,col,i,j;
        cout<<"Enter the no of rows : ";
        cin>>row;

        cout<<"Enter the no of columns : ";
        cin>>col;

    int mat[row][col];
        cout<<"Enter th elements of matrix ";
        for(i=0;i<row;i++){
            for(j=0;j<col;j++){
                cin>>mat[i][j];

            }
            
        }
        
    
    
    cout<<"The matrix is : "<<endl;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){

            cout<<mat[i][j] <<" ";
        }
        cout<<endl;

    }
   

    return 0;
}

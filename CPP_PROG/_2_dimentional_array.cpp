#include<iostream>
using namespace std;


int main(){

int i,j;
    int mat[2][3]={{1,3,2},{2,4,3}}; 

 for(i=0;i<2;i++)
 {
    for(j=0;j<3;j++){
        cout<<i;
    }

}

//here while declaring the dimentions of a matrix the numbering starts with 0, like position of an element in the array .

    cout<<"The element at first row and 3rd column is : "<<mat[0][2]<<endl; //i,e element at first row and 3rd column --> 3
    
    cout<< "The element at second row and 2nd column is : " << mat[1][1]<<endl; // 2nd row and 2nd column element --> 4


    mat[1][1]=5;          //  changing the element of second row and third column.
    cout<<"The new element at 2nd row and 2nd column is : "<<mat[1][1]<<endl;

    return 0;
}


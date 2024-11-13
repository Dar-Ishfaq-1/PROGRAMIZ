#include <iostream>
using namespace std;

void Area(int l,int b){
    cout <<"Area of a rectangle is "<<l*b <<endl;

}
void Area(int s){
    cout<<"Area of a square is "<<s*s<<endl;

}
main(){
    Area(5,6);
    Area (8);

    return 0;

}
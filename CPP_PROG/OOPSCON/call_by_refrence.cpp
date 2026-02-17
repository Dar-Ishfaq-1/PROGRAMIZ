// #include<iostream>
// using std::cout;
// using std::cin;
// using std::endl;
// using std::string;

// void swap(int a,int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;

// }
// int main()
// {


// int a = 5; 
// int b = 6;
// swap(a,b);
// cout<<"The value of a : "<<a<<endl;
// cout<<"The value of b : "<<b<<endl;
//     return 0;



// }

#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

void swap(int *x,int *y)
{
    int temp = *x; // temp = 5
    *x = *y; // intially a = 5 -> b = 9 ->  now a = 9
    *y = temp; // *y = 5 -> b = 5

}
int main()
{


int a = 5; 
int b = 6;

swap(&a,&b);
// int *x =&a;
// int *y = &b;

// swap(x,y);
cout<<"The value of a : "<<a<<endl;
cout<<"The value of b : "<<b<<endl;
    return 0;



}
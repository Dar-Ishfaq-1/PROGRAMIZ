#include <iostream>
#include <string>
using namespace std;

 int fun(string my_age = "5-7f.t")
 {
     cout<<"my height is : "<<my_age<<endl;
 }
int main(){
    fun("5.4ft");
    fun("5.1ft");
    fun("5.3ft");
    fun();

    


return 0;

}
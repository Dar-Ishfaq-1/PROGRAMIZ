// #include<iostream>
// using namespace std;
// void myfun(string country = "turkey")
//     {
//         cout<<country<<endl;
     
//      }

// int main(){
//     myfun("afghan");
//     myfun("SA");
//     myfun();



//     return 0;
// }

#include <iostream>
using namespace std;

// Function with a default parameter
void myfun(string country = "turkey") {
    cout << country << endl;
}

int main() {
    myfun("afghan");  // Calls the function with "afghan" as the argument
    myfun("SA");      // Calls the function with "SA" as the argument
    myfun();          // Calls the function without an argument, so the default value "turkey" is used

    return 0;
}

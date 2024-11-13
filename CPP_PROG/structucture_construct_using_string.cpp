
#include <iostream>
#include <string>
using namespace std;

int main(){

struct {
    
    string name;
    int age;
    string clas;
    string height;
}student;
student.name = "ishfaq";
student.age = 24;
student.clas = "12th";
student.height = "6.10 ft";
cout<<"Name = "<<student.name<<"."<<endl;
cout<<"Height = "<<student.height<<"."<<endl;
cout<<"Class = "<<student.clas<<"."<<endl;


return 0;

}

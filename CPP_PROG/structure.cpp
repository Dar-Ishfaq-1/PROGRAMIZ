#include <iostream>
#include <cstring>
using namespace std;

int main(){

struct {
    
    char name[10];
    int age;
    char clas[12];
    char height[];
}student;
strcpy(student.name,"ishfaq");
student.age = 24;
strcpy(student.clas ,"12th");
strcpy(student.height, "6.10 ft");
cout<<"Name = "<<student.name<<"."<<endl;
cout<<"Height = "<<student.height<<"."<<endl;
cout<<"Class = "<<student.clas<<"."<<endl;


return 0;

}


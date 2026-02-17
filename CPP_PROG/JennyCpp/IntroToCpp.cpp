//Author - Dar ishfaq 
/*written on 11 11 24
prog to demonstrate basic str of c++ prog */
#include<iostream>
/* to avoid writing std:: again and again
 we can simply either write here using
  namespace or using std::count and std::cin 
  the later can be written to avoid include 
  the whole std namespace
*/
#define PI 3.14

int r = 2;
void area();
//void area();

class MyClass{
    public:
        int a;
        void disp()
        {
        /*here cout is from std namespace
         so that is why we write std::cout 
         instesd of simply writing cout that 
         can be written only if the cout is 
         declared in the class as a function
          member*/ 
        std::cout<<"Inside class"<<std::endl;


    }

};
int main()
{
    MyClass m;
    m.a=50;
    m.disp();
    area();
    std::cout<<"hello world"<<std::endl;
    std::cout<<m.a<<std::endl;
    return 0;

}
void area(){
    float area ;
    area = 2*PI*r*r;
    std::cout<<area<<std::endl;


}

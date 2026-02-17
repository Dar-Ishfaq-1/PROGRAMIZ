#include<iostream>

using std::cout;
using std::endl;
using std::string;

class Animal
{

public :
    void animalSound()
    {
        cout<<"The animal makes sound. " <<endl;
    }
    
};

class Cow : public Animal
{
    public :
    void animalSound()
    {
        cout<<"The cow says : Waa!! Waa!!"<<endl;

    }
};

class Dog : public Animal
{
    public : 
        void animalSound()
        {
            cout<<"The dog says : Bow!! Bow!! "<<endl;
        }
};

int main()
{
    Animal myAnimal;
    Dog myDog;
    Cow myCow;

    myAnimal.animalSound();
    myCow.animalSound();
    myDog.animalSound();


    return 0;

}


#include <iostream>
#include<string>

using namespace std;



    class cars {
        //By default the data members are private i,e implicitly. but to acces them we need to keep them public.
        //data members

    private:
        string company_name;
        string model_name;
        string fuel_type;
        float mileage;
        double price;
        //member function

    public:
        void setData(string cname,string mname ,string ftype,float mil, double prc){
            company_name = cname;
            model_name = mname;
            fuel_type = ftype;
            mileage = mil;
            price = prc;

        }

        void dispData()
        {
            cout<<"car properties:"<<endl;
            cout<<"car company_name :"<<company_name<<endl;
            cout<<"car model : "<<model_name<<endl;
            cout<<"car fuel type : "<<fuel_type<<endl;
            cout<<"car mileage : "<<mileage<<endl;
            cout<<"car price : "<<price<<endl;
        }
    };

    int main()
    {
        cars car1;  // objets are nothing but variables of of type class

        car1.setData("toyota","altis","petrol",15.7,1500000);
        car1.dispData();

    return 0;
    }
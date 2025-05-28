#include<iostream>
using namespace std;
class Vehicle  //base class 
{
    private:
          
        string riding_mode;
    public:
        void setMode(string mode)
        {
            riding_mode=mode;
        }
        string usemode()
        {
            return riding_mode;
        }
};

class Bike : public Vehicle //derived class can access the data & members functions of the base class(via public)
{
    private:
        string brand;

    public:
        void setName(string name)
        {
            brand=name;

        }

        string showName()
        {
            return brand;
        }
};

int main()
{
    string mode_of_transport,brand_name;

    cout<<"Enter the mode of transport & Brand Name of your Bike:";
    cin>>mode_of_transport>>brand_name;

    Bike bike1;  // object of Derived class
    bike1.setMode(mode_of_transport); //Acessesing the member function of base class(inheriting the properties)
    bike1.setName(brand_name);
    
    cout<<"I've a "<<bike1.showName()<<" bike,I can travel to my native via "<<bike1.usemode();
}
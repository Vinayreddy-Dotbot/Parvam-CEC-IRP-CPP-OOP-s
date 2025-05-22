#include<iostream>
using namespace std;
class Car
{
    public:
        string brand,model,varient,fuel_type;
        int year;
        int price;

        //member Function
        void start()
        {
            cout<<"Model"<<"Started!"<<endl;
        }
        void park()
        {  
            cout<<"Model"<<"parked!"<<endl;
        }
        void stop()
        {
            cout<<"Model"<<"Stopped!"<<endl;
        }
        void display()
        {
            cout<<"Brand:"<<brand<<endl;
            cout<<"Model:"<<model<<endl;
            cout<<"Varient:"<<varient<<endl;
            cout<<"Fuel Type:"<<fuel_type<<endl;
            cout<<"Launch Year:"<<year<<endl;
            cout<<"Price:"<<price<<endl;
        }
};

int main()
{
    Car c1; //Object Created for the class Car
    c1.brand="Toyota";
    c1.model="innova";
    c1.varient="6seater";
    c1.fuel_type="Diesel";
    c1.year=2024;
    c1.price=1500000.00;
    c1.start();
    c1.park();
    c1.stop();
    c1.display();
}
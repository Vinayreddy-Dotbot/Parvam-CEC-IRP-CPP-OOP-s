#include<iostream>
using namespace std;
class Bike
{
    public:
        string brand,model,engine_type;
        int year,price;
    
    void injectionFuel() //Internal Data - Hidden
    {
        cout<<"Injected the Fuel - Petrol!"<<endl; 
    }

    void igniteFuel() //Internal Data - Hidden
    {
        cout<<"Ignite The Fuel!"<<endl;
    }

    void start(string bikeModel)
    {
        injectionFuel(); //Abstraction
        igniteFuel(); //Abstraction
        cout<<model<<" Started,happy Journey!";
    }

    void stopAcceleration() //Internal Data - Hidden
    {
        cout<< ",acceleration Stopped!"<<endl;
    }

    void stopFuelFlow() //Internal Data - Hidden
    {
        cout<<"Stopping The Fuel"<<endl;
    }


    void stop()
    {
        stopAcceleration(); //Abstraction
        stopFuelFlow(); //Abstraction

        cout<<model<<" Stopped,Lock The Vehicle!"; 
    }
};

int main()
{
    Bike bike1;
    bike1.brand="Bajaj";
    bike1.model="Pulsar NS125";
    bike1.engine_type="BS6";
    bike1.year =2022;
    bike1.price=150000;
    bike1.start(bike1.model);
    bike1.stop();

}
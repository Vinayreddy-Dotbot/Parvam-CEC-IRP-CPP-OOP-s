#include<iostream>
using namespace std;

class Customer
{
    public:
        string firstName,lastName;
        int age,rating;
        
        //initialzed the Con  structor
        Customer()
        {
            firstName="john";
            lastName="Doe";
            age=10;
            rating=5;

        }

        void showDetails()
        {
            cout <<"Customer Name:"<<firstName<<" "<<lastName<<endl;
            cout <<"Customer Age:"<<age<<endl;
        }

        void giveRating(int rate); // Declared the member function
        
        
        void showRating()
        {
            cout <<"You've given "<<rating<<" star rating.Thank You!"<<endl;
        }


};

void Customer :: giveRating(int rate)
{
    rating=rate;
}

int main()
{
    Customer c1; // Invoked the Constructor to assign the default value
    int starRating;
    cout<<"Give your rating from 1-5:";
    cin>>starRating;
    c1.showDetails();
    c1.giveRating(starRating);
    c1.showRating();

    Customer c2;
    c2.firstName="roy";
    c2.lastName="raj";
    c2.age=25;
    cout<<"Give your rating from 1-5:";
    cin>>starRating;
    c2.showDetails();
    c2.giveRating(starRating);
    c2.showRating();

}
#include<iostream>
using namespace std;
class Wish
{
    private:
        string name;
        int age;
    public:
        Wish() //Defaultt constructor
        {
            name="Unknown";
            age=0;
        }

        Wish(string n,int a); //Parameterized Constructor

        void birthdayWishes(); // Declared the member function


};

Wish :: Wish(string n, int a) //Defining the rules of Parameterized constructor outside the Class using scope Resolution Operator
{                             //Syntax:className :: constructor(parameters)(no return type)
    name=n;
    age=a;

}


void  Wish :: birthdayWishes()  //Defining the member function outside the Class using scope Resolution Operator
        {                       //Syntax: return_type className :: member_function(parameters)(return type is must)
            cout<<"Happy Birthday "<<name<<" ! You're "<<age<<" years old."<<endl;
        }

int main()
{
    string personName;
    int personAge;


    Wish person1; //Object Declared
    person1.birthdayWishes();

    cout<<"Enter your Name:";
    cin>>personName;
    cout<<"Enter your Age:";
    cin>>personAge;

    Wish person2(personName,personAge);
    person2.birthdayWishes();


}
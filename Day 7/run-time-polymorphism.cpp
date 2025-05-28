#include<iostream>
using namespace std;
class Base 
{
    public:
        void showBase()
        {
            cout<<"Base member function has been called!"<<endl;
        }

};
class Derived : public Base
{
    public:
        void showBase()//function overloading
        {
            cout<<"Derived member function has been called!"<<endl;
            //Syntax: base-class-name :: member-function-name
        }
};

//Example 2

class Animal
{
    public:
        void makeSound()
        {
            cout<<"Animal makes some sound!"<<endl;
        }

        
};
class Dog : public Animal
{
    public:
        void makeSound() // Function Overriding(same function name)
        {
            Animal ::makeSound(); //calling the Animal class-member function
            cout<<"Dog Barks!"<<endl;
        }
};
class Cat : public Animal
{
    public:
        void makeSound()
        {
            cout<<"Cat meows!"<<endl;
        }
};

int main()
{
    Base b1;
    b1.showBase();

    Derived d1;
    d1.showBase();

    Dog dog1;
    dog1.makeSound();

    Cat cat1;
    cat1.makeSound();
}
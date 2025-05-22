#include<iostream>
using namespace std;

void sayHello()  //funtion declaration
{
    cout<<"Hello!"<<endl;  // function definition
}


int SayHi(string name) // funtions with parameters
{
    cout<<"Hi, "<<name<<endl;
}
int greet(string fname,string lname,int age) // funtions with Different parameters
{
    cout<<"Hi, "<<fname<<" "<<lname<<", Age: "<<age<<endl;
}
int main()
{
    string FirstName,friendName,lastName;
    int Age;
    cout<<"Enter your first name:";
    cin>> FirstName;
    cout<<"Enter your last name:";
    cin>>lastName;
    cout<<"Enter your Age:";
    cin>>Age;
    cout<<"Enter your friends name:";
    cin>> friendName;
    sayHello();  // function call
    SayHi(FirstName); // function call with arguments
    SayHi(friendName);
    greet(FirstName,lastName,Age);
    
}
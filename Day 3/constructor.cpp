#include<iostream>
using namespace std;                            //while defining no need of wirtten type,class name and constrctor name is same,dont return any values,three types of construtor-default constructor,paramentratized consctructor,copy constructor
class calculate                                             //used to initialize the default value to the object
{
    public:
        //Member Data
        int num1,num2;
        float res;
        
        //Constructor is declared and It is also a default constructor(no parameters)
        // control +/   :comment
         calculate()
         {
             num1=5;
             num2=10;
         }
        
        //Member Function
        void showOutput()
        {
            cout<<"Addition:"<<num1+num2<<endl;
            cout<<"Subtraction:"<<num1-num2<<endl;
            cout<<"Mulltiplication:"<<num1*num2<<endl;
            cout<<"Quotient:"<<num1/num2<<endl;
            cout<<"Reminder:"<<num1%num2<<endl;
        }

    };

        int main()
        {
            //Initializing the default value using constructor automatically when the object is declared
            calculate c1;  //object
            //assigning the values to the data members
            calculate c2;
            c2.num1=20;
            c2.num2=50;
            c1.showOutput();
            c2.showOutput();
        }

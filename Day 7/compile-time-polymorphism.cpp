#include<iostream>
using namespace std;
class Calculate 
{
    public:
        int result;
        float res;

        //Function Overloading - compile Time polymorphism
        int sum(int num) // sum function expecting 1 parameter(int)
        {
            result=num+num;
            return result;
        }
        int sum(int num1,int num2) // sum function expecting 2 parameter(int)
        {
            result=num1+num2;
            return result;
        }
        float sum(float n1,float n2) // sum function expecting 2 parameter(float)
        {
            res=n1+n2;
            return res;
        }
};

int main()
{
    int number1,number2;
    float decimal1,decimal2;

    cout<<"Enter any two integers:";
    cin>>number1>>number2;

    cout<<"Enter any two decimals:";
    cin>>decimal1>>decimal2;
    
    Calculate cal1;
    cout<<"Adding the number itself:"<<cal1.sum(number1)<<endl;
    cout<<"Addition of 2 Integers:"<<cal1.sum(number1,number2)<<endl;
    cout<<"Addition of 2 Decimals:"<<cal1.sum(decimal1,decimal2)<<endl;
}
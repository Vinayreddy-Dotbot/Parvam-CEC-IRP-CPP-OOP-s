#include<iostream>
using namespace std;
class Increment
{
    private:
        int number,value,value1;

    public:
        void setNumber(int num)
        {
            number=num;
        }
        
        //Syntax for operator ovreloading:  return_type operator symbol(parameters){parameter is optional}
        //Unary Operator Overloading

        void operator --()
        {
            value=number-5;
        }
        
        void operator ++()
        {
            value1=number+5;
        }

        void showValue()
        {
            cout<<"Before Derimenting:"<<number<<endl;
            cout<<"After Decrimenting:"<<value<<endl;
            cout<<"Before Incrementing:"<<number<<endl;
            cout<<"After Incrementing:"<<value1<<endl;


        }
              
};

int main()
{
    int n;
    
    cout<<"Enter any number for incrementing & decrementing its value by 1:";
    cin>>n;
    Increment num1;


    num1.setNumber(n);
    --num1;
    ++num1;
    num1.showValue();

    cout<<"Number After Incrementing:"<<++n<<endl; 
    cout<<"Number After Decrementing:"<<--n<<endl;
}
 
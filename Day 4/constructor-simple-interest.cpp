#include<iostream>
using namespace std;
class Interest
{
    private:
        int principal,term, rate, totalInterest;
        float rateinPercent;
    public:
        int SimpleInterest=0;
        Interest()
        {
            principal=0;
            term=0;
            rate=0;
            totalInterest=0;
            rateinPercent=0;
            cout<<"Total Interest Earned:"<<totalInterest<<endl;

        }

        void setValues(int a,int y)  //setter method
        {
            principal=a;
            term=y;
        }

        void setRateValueInteger(int rateInInteger) //setter method
        {
            rate=rateInInteger;
        }

        
        void setRateValueFloat(float rateInFloat) //setter method
        {
            rate=rateInFloat;
        }



        Interest(int p,int t,int r) // Parameterized Constructor(3 parameters)
        {
            setValues(p, t);
            setRateValueInteger(r);
            SimpleInterest=(principal*term*rate)/100;
            cout<<"Simple Interest For The Following Details:"<<endl;
            cout<<"Principal Amount:"<<principal<<endl;
            cout<<"No. Of Years(Term):"<<term<<endl;
            cout<<"Rate Of Interest(In Integer):"<<rate<<endl;
            totalInterest=principal+SimpleInterest;
            cout<<"Total Interest Earned:"<<totalInterest<<endl;

        }

        Interest(int p,int t,float rateInDecimal) // Parameterized Constructor(3 parameters,1-float,2-int)
        { 
            setValues(p, t);
            setRateValueFloat(rateInDecimal);
            SimpleInterest=(principal*term*rateInDecimal);
            cout<<"Simple Interest For The Following Details:"<<endl;
            cout<<"Principal Amount:"<<principal<<endl;
            cout<<"No. Of Years(Term):"<<term<<endl;
            cout<<"Rate Of Interest(In Decimal):"<<rateInDecimal<<endl;
            totalInterest=principal+SimpleInterest;
            cout<<"Total Interest Earned:"<<totalInterest<<endl;
        } 


        ~Interest() // Automatically free up the memory used by constructor when object has lost the scope
        { 
            cout<<"Destructor has been called to destroy or free up the memory";
        }
        
};
 
int main()       
{
    int amount,year,rateOfInterest;
    float interestRate;


    Interest int1; //Default Constructor

    cout<<"Enter The Principal Amount,No. Of Years & Rate Of Interest(eg. 5):";
    cin>>amount>>year>>rateOfInterest;

    Interest int2(amount,year,rateOfInterest); //Parameterized Constructor(3 arguments,3-int)
    
    cout<<"Enter The Principal Amount,No. Of Years & Rate Of Interest(eg. 5):";
    cin>>amount>>year>>interestRate;

    Interest int3(amount,year,interestRate); //Parameterized Constructor(3 arguments,2-int,1-float)
    

}
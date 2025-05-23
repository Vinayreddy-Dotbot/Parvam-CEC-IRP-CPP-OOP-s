#include<iostream>
using namespace std;
class Company
{
    private:
        string cin;
        int TotalWorth=0;


    public:
        string gstNum,location;
        int numOfEmp;


        void setDetails(string cinNum,int worth) //setter method
        {
            cin=cinNum;
            TotalWorth=worth;

        }

        void getDetails(string gstNumber) //getter method
        {
            cout <<"Coorporate Identity Number:"<<cin<<endl;
            cout <<"Total worth of the company:"<<TotalWorth<<endl;
        }
        
        
        void getBasicDetails(); // Declare the member function


};


//Function Definition out of the class
//syntax:return_type class_name :: member_function
void Company :: getBasicDetails() //Scope Resolution Operator
{
    cout <<"GST Number:"<<gstNum<<endl;
    cout <<"Location:"<<location<<endl;
    cout <<"Number of employers:"<<numOfEmp<<endl;
}

int main()
{
    Company comp1; //Object created
    comp1.gstNum="12345ABCDE678";
    comp1.location="Bengaluru";
    comp1.numOfEmp=50;
    comp1.getBasicDetails();


    string cinNumber;
    int companyWorth;
    cout <<"Enter the corporate identity number:"<<endl;
    cin >> cinNumber;
    cout <<"Enter total worth:"<<endl;
    cin >> companyWorth;

    comp1.setDetails(cinNumber,companyWorth);
    comp1.getDetails(comp1.gstNum);
}
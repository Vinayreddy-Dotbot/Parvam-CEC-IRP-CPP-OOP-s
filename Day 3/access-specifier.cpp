#include<iostream>
using namespace std;
class Bank
{
    private: // cant assign the private member(cust1.balence=8000;-->error)
        int balance=0;
    public:
        //Member of class
        string custName,custEmail;
        int acNumber;


        void createAccount(string cName,string cEmail)
        {
            custName=cName;
            custEmail=cEmail;
            

        }

        void displayInfo()
        {
            cout <<"Customer Name: "<<custName<<endl;
            cout <<"Customer Email: "<<custEmail<<endl;
        }


        void addBalance(int account,int amount) // setter
        {
            balance += amount;
            cout <<"The amount has been deposited succesfully!"<<endl;

        }

        void withdrawamount(int account,int amount) // setter
        {
            balance -= amount;
            cout <<"The amount has been Withdrawn succesfully!"<<endl;
        }

        void checkBalance() //getter
        {
            cout << "Bank Balence: " <<balance<<endl;
        }
};


int main()
{
    Bank cust1; //Object Declared
    string name,email;
    int AcNum,amount;
    cout << "Enter your name:";  //We can assign the value to the public member
    cin >> name;
    cout << "Enter your Email id:";
    cin >> email;
    cout <<"Enter account number:";
    cin >> AcNum;
    cout <<"Enter amount to be deposited:";
    cin >> amount;

    cust1.createAccount(name,email);
    cust1.displayInfo();
    cust1.addBalance(AcNum,amount);
    cust1.checkBalance();
    cout <<"Enter amount to be withdrawn:";
    cin >>amount;
    cust1.withdrawamount(AcNum,amount);
    cust1.checkBalance();

}
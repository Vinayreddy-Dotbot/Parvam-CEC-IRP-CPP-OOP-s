#include<iostream>
using namespace std;
class Employee
{
    private:
        string employeeID,employeeName;
        int experience;
        float salary;

    public:
        void addDetails(string name,string id,int exp,float salary)
        {
            
            employeeID=id;
            employeeName=name;
            experience=exp;
            this->salary=salary;
        }

        void showDetails()
        {
            cout<<"The employee with name "<<employeeName<<" bearing  "<<employeeID<<" have "<<experience<<" years of experience and receives a salary of Rs."<<salary<<"/-"<<endl;
        }
};

int main()
{
    string empName,empID;
    int empExp;
    float empSalary;

    cout<<"Enter your Name,Employee-ID,Years of Experience & Salary:"<<endl;
    cin>>empName>>empID>>empExp>>empSalary;

    Employee emp1;
    Employee *empPtr=&emp1; // Pointer is pointing/referring to the Object emp1


    //Using the pointer we are assigning the value to the object using Pointer Dereferencing and Dot Operator
    (*empPtr).addDetails(empName,empID,empExp,empSalary); // Using the pointer we assigning the value to the object
    (*empPtr).showDetails();


    //Using the pointer we are assigning the value to the Object using pointer Deferencing and Arrow Operator
    empPtr->addDetails(empName,empID,empExp,empSalary); // Using the pointer we assigning the value to the object
    empPtr->showDetails();


    Employee *ptrEmp=new Employee; //Dynamically Allocating Memory to the pointer object (No Object referred)
    //Syntax: className *pointer_name=new className
    ptrEmp->addDetails("Ajay","PM293",5,600000);
    ptrEmp->showDetails();
    
    
    //emp1.addDetails<==>(*empPtr).addDetails<==>empPtr->addDetails

    

    

}
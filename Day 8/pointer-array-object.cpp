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

class Skill : public Employee
{
    private:
        int skillCount;
        string skills[10]; //Normal Array
    public:
        void setSkills(int count)
        {
            skillCount=count;
            cout<<"Enter the "<<count<<" technologies you're familiar with:"<<endl;
            for(int i=0;i<count;i++)
            {
                cout<<"Skill "<<i+1<<":";
                cin>>skills[i];
            }
        }

        void showSkills()
        {
            cout<<"Skills known:"<<endl;
            for(int i=0;i<skillCount;i++)
            {
                cout<<i+1<<"."<<skills[i]<<endl;
            }
        }
};

int main()
{
    string emp_Name,emp_ID;
    int emp_Exp,skill_count;
    float emp_Salary;

    cout<<"Enter your Name,Employee-ID:"<<endl;
    cin>>emp_Name>>emp_ID;

    cout<<"Enter your Years of Experience & Salary:"<<endl;
    cin>>emp_Exp>>emp_Salary;


    //Pointer referring to the objecct s1 of Skill class which can also inherit the properties of Employee class
    Skill s1;
    Skill *emp1=&s1; //pointer object -*emp1

    emp1->addDetails(emp_Name,emp_ID,emp_Exp,emp_Salary);
    

    cout<<"Enter the number of technologies you know:"<<endl;
    cin>>skill_count;

    emp1->showDetails();
    emp1->setSkills(skill_count);
    emp1->showSkills();

}
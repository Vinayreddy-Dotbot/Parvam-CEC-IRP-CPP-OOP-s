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
        string *skills;
    public:
        Skill()
        {
            cout<<"No Data Found!";
        } //Default Constructor

        Skill(int count) //Parameterized Constructor
        {
            skillCount=count;
            skills=new string[skillCount]; //Dynamically Allocating Memory for the Pointer Array(skills)
            cout<<"Dynamically created the Pointer Array-skills"<<endl;
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

        ~Skill() //destructor
        {
            delete[] skills; //Free up the Memory allocated by Pointer Array using 'delete' keyword
            cout<<"Memory has been Cleared by the Destructor!"<<endl;
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

    cout<<"Enter the technologies you know:"<<endl;
    cin>>skill_count;


    //Pointer referring to the objecct s1 of Skill class which can also inherit the properties of Employee class
    Skill s1(skill_count);
    Skill *emp1=&s1; //pointer object -*emp1

    s1.addDetails(emp_Name,emp_ID,emp_Exp,emp_Salary);

    
      
    emp1->showDetails();
    emp1->showSkills();
    

    Skill s2;

}
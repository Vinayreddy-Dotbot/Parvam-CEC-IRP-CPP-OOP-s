#include<iostream>
using namespace std;
class Teacher
{
    private:
        string branch;
    public:
        string name,qualification;
        int experience;
    
        Teacher() //Default constructor
        {
            branch="AIML";
            name="john Doe";
            qualification="M.tech";
            experience=5;
            cout<<"Welcome John Doe!"<<endl;
        }

        void setData(string Tname,string Tbranch,string Tqual,int exp)
        {
            name=Tname;
            branch=Tbranch;
            qualification=Tqual;
            experience=exp;

        }


        Teacher(string Teachername,string TeacherBranch,string TeacherQual,int TeacherExp) //Parameterized constructor
        {
            
            setData(Teachername,TeacherBranch,TeacherQual,TeacherExp); //setter
            cout<<"Welcome, "<<name<<" to "<<branch<<" Branch"<<"."<<endl;
            cout<<"You've graduated with,"<<qualification<<" Degree.And you've "<<experience<<" years of experience"<<endl;
        }

        // Syntax for copy Constructor: Constructor(Reference-Constructor address-of-the-object)
        Teacher(Teacher &t) //Copy constructor 
        {
            name=t.name;
            branch=t.branch;
            qualification=t.qualification;
            experience=t.experience;
        }

        void getData() //getter
        {
            cout<<"Welcome,"<<name<<" to "<<branch<<"branch"<<"."<<endl;
            cout<<"You've graduated with,"<<qualification<<" Degree.And you've "<<experience<<" years of experience"<<endl;
        }

        ~Teacher() //Destructor
        {
            cout<<"Object's work is done,Cleaning the memory"<<endl;
        }
        
};

int main()
{
    string n,q,b;
    int e;

    Teacher Teacher1;  // Object Created & Invoked the Default Constructor

    cout<< "Enter yout name,qualification,branch and experience:";
    cin>>n>>q>>b>>e;

    Teacher Teacher2(n,b,q,e);

    Teacher Teacher3=Teacher2;
    Teacher3.getData();
    

}

#include<iostream>
using namespace std;                             // characteristics of oops(Blueprint): object,class,polimorphosim(same name multiple forms),data encapulation(data and member function),inheritence(transfering properties from parent class to child class ),data obstraction(hide sensitive data);uses: reuse the code,reduce complexity,related to real wrold examples(real time entity);here we use bottom up approach;mode secure and reliable
//syntax
//class class_name //class delaration
class Student
{
    public: //blueprint
        string name,college,branch;    
        int sem;

        void show()    //Member function
        {
            cout<<"Name: "<<name<<endl;
            cout<<"College: "<<college<<endl;
            cout<<"Branch: "<<branch<<endl;
            cout<<"Semester: "<<sem<<endl;
        }
};


int main()
{
    Student student1; //Object Creation
    student1.name="Vinay"; //Assigning teh value to the class using Object
    student1.college="CEC";
    student1.branch="AIML";
    student1.sem=2;
    //control +D:Selecting same pattern
    Student student2; //Object Creation
    student2.name="ravi"; //Assigning teh value to the class using Object
    student2.college="CEC";
    student2.branch="AIML";
    student2.sem=3;
    student1.show();
    student2.show();
}

#include<iostream>
using namespace std;
class Parent  //base class
{
    private:
        int net_worth=0;
    public:
        string family_Name,family_head;
        int number_of_members;

        void setData(int worth,string familyName,string familyHead,int member_count)
        {
            net_worth=worth;
            family_Name=familyName;
            family_head=familyHead;
            number_of_members=member_count;

        }

        int showNetWorth() //gettter
        {
            return net_worth; //getter
        }

        int getFamilyInfo()
        {
            cout<<"I'm from "<<family_Name<<" family,and my family head is "<<family_head<<".Our Family's Net-Worth is about "<<showNetWorth()<<endl;
        }


};
//Syntax for deriving the Derived class--> class derived-class-name : accesibility mode base-class-name
//By default --> derived class using privte accesability mode
//if Derived class used private accesability mode than public data & member function of the base class will become private
//if Derived class used public accesability mode than public data & member function of the base class will remain public 
class Child : public Parent   //Derived class(By Default Private-assessability mode)
{
    public:
        string member_name;
        int age;

        void addDetails(string name,int person_age) //Member function
        {
            member_name=name;
            age=person_age;
        }  

        void getfamilyDetails() //Member function
        {
            cout<<"My name is "<<member_name<<" and I'm "<<age<<" years old.";
            getFamilyInfo(); //Inheriting the properties of the Base class
        }
};

int main()
{
    string fName,fHead,cName;
    int childAge,fWorth,fMembers;

    cout<<"Enter your family name,family head,number of members & net Worth:";
    cin>>fName>>fHead>>fMembers>>fWorth;

    Parent p1;
    p1.setData(fWorth,fName,fHead,fMembers);
    p1.getFamilyInfo();

    cout<<"Enter your name & Age:"<<endl;
    cin>>cName>>childAge;

    Child c1;
    //c1.family_head;(as child/Derived class is derived with public-accesability mode we can directly access the public data of the base class)
    c1.setData(fWorth,fName,fHead,fMembers);
    c1.addDetails(cName,childAge);

    c1.getfamilyDetails();
}
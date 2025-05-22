#include<iostream>
using namespace std;
int main()
{
    string FirstName,college,branch;
    char sem;
    int age;


    cout<<"Enter your name:";
    cin>>FirstName;
    cout<<"Enter your College name in Short-form:";
    cin>>college;
    cout<<"Enter your branch name in Short-form:";
    cin>>branch;
    cout<<"Enter your Age:";
    cin>>age;
    cout<<"Enter your Semester:";
    cin>>sem;

    cout<<"Your name is "<<FirstName<<",You're "<<age<<" years old.You're Studying in "<<college<<" Collge in "<<branch<<" branch in "<<sem<<" semester";

}

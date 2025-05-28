#include<iostream>
using namespace std;

class Name
{
    private:
        string name;
    public:
        void setname(string n)
        {
            this->name = n;
        }
        void showName()
        {
            cout<<"Your name is "<<name<<endl;
        }
};

int main()
{
    string studentName;

    cout<<"Enter your name: ";
    cin>>studentName;

    Name name1;
    name1.setname(studentName);
    name1.showName();
}
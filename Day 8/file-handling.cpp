#include<iostream>
#include<fstream> //Header File for Handling the Files(Read/Write)
using namespace std;

int main()
{
    //Writing in the file
    ofstream out("sample.txt");
    string name;
    int age;
    cout<<"Enter your name & Age:";
    cin>>name>>age;
    out<<"I'am "<<name<<" And I'am "<<age<<" Year's old";
    out.close();

    ifstream read("abd.txt");
    string line;
    cout<<"File contains:"<<line<<endl;
    while(getline(read,line))
    {
    cout<<line<<endl;
    }
    read.close();

    
}

#include<iostream>
using namespace std;
int main()
{
    int a;
    //Synatax for declaring the pointer: datatype * pointer_name;
    //datatype should be same as reference variable datatype
    //Assign the Address to the pointer: &varaible_name
    // * refers to the pointer variable
    // & refers to the address of the variable
    // ptr refers to the address of the pointer
    // *ptr refers to the value of the pointer
    int *ptr=&a;

    float decimal;
    float *f=&decimal;

    cout<<"Enter the Value of a:";
    cin>>a;

    cout<<"Enter any decimal value";
    cin>>decimal;

    cout<<"Value of a:"<<a<<endl;
    cout<<"Address of a:"<<&a<<endl;
    cout<<"Value of Pointer(ptr):"<<ptr<<endl;
    cout<<"Address of ptr:"<<&ptr<<endl;
    cout<<"Value Pointed at ptr:"<<*ptr<<endl;
    
    cout<<"Value of decimal:"<<decimal<<endl;
    cout<<"Address of decimal:"<<&decimal<<endl;
    cout<<"Value of Pointer(f):"<<f<<endl;
    cout<<"Address of f:"<<&f<<endl;
    cout<<"Value Pointed at f:"<<*f<<endl;
}


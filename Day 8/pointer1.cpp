#include<iostream>
using namespace std;
int main()
{
    int age;
    int *ptrAge=&age; //address reference of age(pointer Referencing)
    string name;
    string *namePtr=&name;


    cout<<"Enter your name & age:";
    cin>>name>>age;

    //*ptrAge & *namePtr -> Pointer Dereferencing
    cout<<"Your name is "<<(*namePtr)<<",You're "<<(*ptrAge)<<" years old."<<endl;
    cout<<"The Address of name is stored in pointer:"<<namePtr<<endl;
    cout<<"The Address of age is stored in pointer:"<<ptrAge<<endl;

    int *num1=new int(5); //Dynamic Memory Allocation
    //Reference Variable is not needed for assigning the address to the pointer we can use new keyword
    cout<<"The value within the pointer num1:"<<(*num1)<<endl;

    int size;
    int *arr =new int[size]; //Dynamic memory allocation for integer array(run-time)

    cout<<"Enter the size of the array:"<<endl;
    delete num1;
    cin>>size;

    cout<<"Enter the "<<size<<" Elements into the array:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"The array contains "<<size<<" Elements,They are:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }

}

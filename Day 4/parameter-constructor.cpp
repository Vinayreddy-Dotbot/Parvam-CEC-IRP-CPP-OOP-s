#include<iostream>
using namespace std;
class Area
{
    private:
        int length,breadth;

    public:
        int res;
        Area() //Default Constructor(no parameters)
        {
            length=0;
            breadth=0;
        }

        Area(int a,int b) // Parameterized Constructor(eg. 2 parameters)
        {
            length=a;
            breadth=b;
        }

        void calculateArea()
        {
            res=length*breadth;
            cout<<"Area of Rectangle with length:"<<length<<" And breadth:"<<breadth<<" is equal to "<<res<<endl;
        }

};

int main()
{
    int len,wid;
    Area rect1; //object 1 created
    rect1.calculateArea();

    cout<<"Enter length and breadth for finding Area of Rectangle:";
    cin >> len >> wid;

     Area rect2(len, wid); //object 2 created
    rect2.calculateArea();

   
}
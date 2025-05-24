#include<iostream>
using namespace std;
class Area 
{ 
    private:
        int length,breadth,height;
        float radius;
    
        public:
        int result;

        Area() // Default constructor
        {
            length=0;
            breadth=0;
            radius=0;
            height=0;
            result=0;
            cout<<"Area:"<<result<<endl;
        }

        Area(int a) //parameterized Constructor(1 parameter-int)
        {
            length=a;
            result=length*length;
            cout<< "Area of Square is:"<<result<<endl;
        }
        Area(int c,int d) //parameterized Constructor(2 parameter)
        {
            length=c;
            breadth=d;
            result=length*breadth;
            cout<< "Area of Rectangle is:"<<result<<endl;
        }
        Area(float r) //parameterized Constructor(1 parameter different datatype-float)
        {
            radius=r;
            result=2*3.142*radius;
            cout<< "Area of Circle is:"<<result<<endl;
        }
        Area(int l,int b,int h) //parameterized Constructor(3 parameter)
        {
            length=l;
            breadth=b;
            height=h;
            result=length*breadth*height;
            cout<< "Area of Cube is:"<<result<<endl; 
        }

};

int main()
{
    Area a1;
    int len,wid,hgt;
    float rad;

    cout<<"Enter the length of the Square:";
    cin>>len;

    Area a2(len); //Finding area of square(1 parameter-int)
    cout<<"Enter the length & breadth of the Rectangle:";
    cin>>len>>wid;

    Area a3(len,wid); //Finding area of rectangle(2 parameter-int)
    cout<<"Enter radius of the Circle:";
    cin>>rad;

    Area a4(rad); //Finding area of circle(1 parameter-float)
    cout<<"Enter the length,breadth &height of the cube:";
    cin>>len>>wid>>hgt;

    Area a5(len,wid,hgt); //Finding area of cube(3 parameter-int)

}

#include<iostream>
using namespace std;
class Complex 
{
    private:
        int real,imaginary;

    public:
        Complex()
        {
            real=0;
            imaginary=0;
        }

        Complex(int r,int i) //parameterized constructor
        {
            real=r;
            imaginary=i;
        }

        //Binary Operator Overloading

        Complex operator +(const Complex &c)
        {
            Complex temp;
            temp.real=real+c.real;
            temp.imaginary=imaginary+c.imaginary;
            cout<<"First Number:"<<real<<" + "<<imaginary<<"i"<<endl;
            cout<<"Second Number:"<<c.real<<" + "<<c.imaginary<<"i"<<endl;
            return temp;
        }
      

        void showResult()
        {
            cout<<"Sum of 2 Complex Numbers:"<<real<<" + "<<imaginary<<"i"<<endl;
        }
};

int main()
{
    int r1,r2,i1,i2;
    cout<<"Enter The first Complex Number(real & imaginary number: eg.5+3i):"<<endl;
    cin>>r1>>i1;
    cout<<"Enter The second Complex Number(real & imaginary number: eg.5+3i):"<<endl;
    cin>>r2>>i2;

    Complex comp1(r1,i1);
    Complex comp2(r2,i2);

    Complex sum=comp1+comp2;

    cout<<"First Complex Number:"<<r1<<" + "<<i1<<"i"<<endl;
    cout<<"Second Complex Number:"<<r2<<" + "<<i2<<"i"<<endl;

    sum.showResult();
}

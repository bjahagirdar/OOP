/*Implement a class Complex which represents the
Complex Number data type. Implement the
following operations:
1. Constructor (including a default constructor
which creates the complex number 0+0i).
2.
2. Overloaded operator+ to add two complex
numbers.
3. Overloaded operator* to multiply two complex
numbers.
4. Overloaded << and >> to print and read Complex
Numbers.
*/

#include<iostream>
using namespace std;

class complex
{
    public:
    int real ,imag;


        complex()
        {
            real=0;
            imag=0;
        }
        friend istream& operator >> (istream& din, complex &c);
        friend ostream& operator << (istream& dout, complex c);
        friend complex operator + (complex, complex);
        friend complex operator * (complex, complex);
};

istream& operator>>(istream& din,complex &c)
{
    cout<<"Enter The Real And Imaginary Part Respectively: ";
    din>>c.real>>c.imag;
    return din;
}


ostream& operator << (ostream& dout, complex c)
{
   dout<<"The Complex Number Is: "<<c.real<<" + "<<c.imag<<"i";
   return dout;
}


 complex operator + (complex c1, complex c2)
{
    complex a;
    a.real=c1.real+c2.real;
    a.imag=c1.imag+c2.imag;
    return a;
}


complex operator * (complex c1, complex c2)
{
    complex a;
    a.real=(c1.real*c2.real)-(c1.imag*c2.imag);
    a.imag=(c1.real*c2.imag)+(c1.imag*c2.real);
    return a;
}


int main()
{
    complex comp1,comp2,comp3,comp4;
    cin>>comp1;
    cin>>comp2;
    comp3=comp1+comp2;
    cout<<comp3;
    comp4=comp1*comp2;
    cout<<comp4;

}

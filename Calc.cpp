/*Write a C++ program create a calculator for an
arithmetic operator (+, -, *, /). The program
should take two operands from user and performs
the operation on those two operands
depending upon the operator entered by user. Use a
switch statement to select the operation.
Finally, display the result.*/

#include<iostream>
using namespace std;

template < class t >
class calc
{
    t a,b;
public:
        calc()
        {
            a=0;
            b=0;
        }
        void get()
{
    cout<<"Enter Two Numbers: ";
    cin>>a>>b;
    cout<<endl;
}


void add()
{
    cout<<"Sum = "<<a+b;
    cout<<endl;
}


void sub()
{
    cout<<"Difference = "<<a-b;
    cout<<endl;
}


void mul()
{
    cout<<"Product = "<<a*b;
    cout<<endl;
}


void div()
{
    cout<<"Division = "<<(float)a/b;
    cout<<endl;
}

};





int main()
{
    char choice1,choice2;

    cout<<"Would You Like To Perform Operations On Integers Or Floats (I/F): ";
    cin>>choice1;

    if(choice1=='i'|| choice1=='I')
    {
        calc <int> i;

        do
        {
            cout<<"================ Calculator ================"<<endl;
            cout<<"+. Addition\n-. Subtraction\n*. Multiplication\n/. Division\nX. Exit\nEnter Your choice";
            cin>>choice2;

            switch(choice2)
            {
            case '+':
                        i.get();
                        i.add();
                        break;
            case '-':
                        i.get();
                        i.sub();
                        break;
            case '*':
                        i.get();
                        i.mul();
                        break;
            case '/':
                        i.get();
                        i.div();
                        break;

            case 'x':
            case 'X':
                        cout<<"You Have Exited Successfully!!!"<<endl;
                        break;
            default:
                    cout<<"Invalid Input"<<endl;
            }
        } while(choice2!='x' || choice2!='X');
    }

    else if(choice1=='f'|| choice1=='F')
    {
        calc<float> f;

        do
        {
            cout<<"================ Calculator ================"<<endl;
            cout<<"+. Addition\n-. Subtraction\n*. Multiplication\n/. Division\nX. Exit\nEnter Your choice";
            cin>>choice2;

            switch(choice2)
            {
            case '+':
                        f.get();
                        f.add();
                        break;
            case '-':
                        f.get();
                        f.sub();
                        break;
            case '*':
                        f.get();
                        f.mul();
                        break;
            case '/':
                        f.get();
                        f.div();
                        break;

            case 'x':
            case 'X':
                        cout<<"You Have Exited Successfully!!!"<<endl;
                        break;
            default:
                    cout<<"Invalid Input"<<endl;
            }
        } while(choice2!='x' || choice2!='X');
    }

    else
        cout<<"Invalid Input"<<endl;
}

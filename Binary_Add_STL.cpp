/*Write C++ program using STL to add binary numbers (assume one bit as one number) use STL stack*/

#include<iostream>
#include<list>
#define MAX 10
using namespace std;

class binary
{
    list <int> num1,num2,result;
    int b,n1,n2,n3=0,s=0,c=0,b1,b2;

public:

        void get()
        {
            cout<<"\n\nEnter Number Of Bits For The 1st Number: ";
            cin>>n1;
            cout<<"Enter The Bits One At A Time i.e After Every Bit Press The Enter Key\n\n";
            for(int i=0;i<n1;i++)
            {
                cout<<"Enter The Bit: ";
                cin>>b;
                num1.push_back(b);
            }


            cout<<"\nEnter Number Of Bits For The 2nd Number: ";
            cin>>n2;
            cout<<"Enter The Bits One At A Time i.e After Every Bit Press The Enter Key\n\n";
            for(int i=0;i<n2;i++)
            {
                cout<<"Enter The Bit: ";
                cin>>b;
                num2.push_back(b);
            }
        }


        void add()
        {
            s=0;
            c=0;
            while(n1!=0 || n2!=0)
            {
                b1=0;
                b2=0;

                if(n1!=0)
                {
                    b1=num1.back();
                    num1.pop_back();
                    n1--;
                }


                if(n2!=0)
                {
                    b2=num2.back();
                    num2.pop_back();
                     n2--;
                }


                s=(b1+b2+c)%2;
                c=(b1+b2+c)/2;
                result.push_back(s);
                n3++;
            }

            if(c==1)
            {
                result.push_back(c);
                n3++;
            }

            cout<<"The Sum Is: ";
            while(n3!=0)
            {
                cout<<result.back()<<" ";
                result.pop_back();
                n3--;
            }
            cout<<endl;
        }
};


int main()
{
    binary B;
    char c;
    do
    {
       cout<<"================ Binary Addition ================\n";
       B.get();
       B.add();
       cout<<"\nDo You Wish To Continue (Y/N): ";
       cin>>c;
    } while(c=='y' || c=='Y');


}

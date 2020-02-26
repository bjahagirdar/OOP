/*Create a class template to represent a generic
vector. Include following member functions:
1 To create the vector.
2 To modify the value of a given element
3 To multiply by a scalar value
06
4 To display the vector in the form (10,20,30,...)
*/

#include<iostream>
using namespace std;

template<class t>
class vect
{
    t a[30],val;
    int n;
public:

        void create()
        {
            cout<<"Enter Number of Elements: ";
            cin>>n;
            for(int i=0;i<n;i++)
                cin>>a[i];
            cout<<"Vector Has Been Created!!!"<<endl;
        }

        void mul()
        {
            cout<<"Enter The Value To Be Multiplied: ";
            cin>>val;

            for(int i=0;i<n;i++)
                a[i]*=val;

            cout<<"After Multiplying With "<<val<<" The Vector Is: ";

            cout<<"( ";
            for(int i=0;i<n;i++)
            {
                if(i==n-1)
                     cout<<a[i];
                else
                 cout<<a[i]<<",";
            }

            cout<<" )"<<endl;
        }

        void modify()
        {
            int pos;
            /*  t mod;    cout<<"Enter The Number To Be Modified: ";  cin>>mod;   for(int i=0;i<d;i++)    if(a[i]==mod)   break;  */
            cout<<"Enter The Position Of The Element To Be Modified: ";
            cin>>pos;
            cout<<"Enter The New Value: ";
            cin>>a[pos-1];
            cout<<"Vector Has Been Modified!!!"<<endl;
        }

        void display()
        {
            cout<<"( ";
            for(int i=0;i<n;i++)
            {
                if(i==n-1)
                     cout<<a[i];
                else
                 cout<<a[i]<<",";
            }

            cout<<" )"<<endl;
        }
};


int main()
{
    char choice1;
    cout<<"Do You Want To Perform Vector Operations On Integer Numbers Or Float Numbers (I/F): ";
    cin>>choice1;
    cout<<"\n\n";

    if(choice1=='i' || choice1=='I')
    {
        vect<int> v;
        int choice2;
        do
        {
            cout<<"================= Integer Vector =================\n";
            cout<<"1. Create A Vector\n2. Modify A Value\n3. Multiply A Scalar\n4. Display The Vector\n5. Exit\nEnter Your Choice: ";
            cin>>choice2;
            switch(choice2)
            {
                case 1:
                        v.create();
                        break;

                case 2:
                        v.modify();
                        break;

                case 3:
                        v.mul();
                        break;

                case 4:
                        v.display();
                        break;

                case 5:
                        cout<<"You Have Exited Successfully!!!"<<endl;
                        break;

                default:
                        cout<<"Invalid Input"<<endl;
            }
        }while(choice2!=5);

    }

    else if(choice1=='f' || choice1=='F')
    {
        vect<float> v;
        int choice2;
        do
        {
             cout<<"================= Float Vector =================\n";
            cout<<"1. Create A Vector\n2. Modify A Value\n3. Multiply A Scalar\n4. Display The Vector\n5. Exit\nEnter Your Choice: ";
            cin>>choice2;
            switch(choice2)
            {
                case 1:
                        v.create();
                        break;

                case 2:
                        v.modify();
                        break;

                case 3:
                        v.mul();
                        break;

                case 4:
                        v.display();
                        break;

                case 5:
                        cout<<"You Have Exited Successfully!!!"<<endl;
                        break;

                default:
                        cout<<"Invalid Input"<<endl;
            }
        }while(choice2!=5);

    }

    else
       cout<<"Invalid Input"<<endl;

}

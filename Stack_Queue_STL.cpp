/*
Write C++ program using STL for implementation
of stack & queue using SLL
*/

#include<iostream>
#include<list>
#define MAX 10
using namespace std;

class Stack
{
    int a,n=0;
    list<int> s;

public:

        void Push()
        {
            if(n<MAX)
            {
                cout<<"Enter The Number To Be Pushed: ";
                cin>>a;
                s.push_front(a);
                cout<<a<<" Has Been Pushed Into The Stack."<<endl;
                n++;
            }
            else
                cout<<"The Stack Is Full \"Overflow\"."<<endl;
        }

        void Pop()
        {
            if(n!=0)
            {
                cout<<s.front()<<" Has Been Popped From The Stack."<<endl;
                s.pop_front();
                n--;
            }
            else
               cout<<"The Stack Is Empty \"Underflow\"."<<endl;
        }

        void Top()
        {
            if(n!=0)
                 cout<<s.front()<<" Is The Top Element Of Stack."<<endl;
            else
                cout<<"The Stack Is Empty."<<endl;
        }
};


class Queue
{
    int b,n=0;
    list<int> q;

public:
        void Insert()
        {
            if(n<MAX)
            {
                cout<<"Enter The Number To Be Inserted: ";
                cin>>b;
                q.push_back(b);
                cout<<b<<" Has Been Inserted Into The Queue."<<endl;
                n++;
            }
            else
                cout<<"The Queue Is Full \"Overflow\"."<<endl;
        }

        void Delete()
        {
            if(n!=0)
            {
                cout<<q.front()<<" Has Been Deleted From The Queue."<<endl;
                q.pop_front();
                n--;
            }
            else
               cout<<"The Queue Is Empty \"Underflow\"."<<endl;
        }

        void Front()
        {
            if(n!=0)
                cout<<q.front()<<" Is The Front Element Of Queue."<<endl;
            else
             cout<<"The Queue Is Empty."<<endl;
        }

        void Rear()
        {
            if(n!=0)
                  cout<<q.back()<<" Is The Rear Element Of Queue."<<endl;
            else
                 cout<<"The Queue Is Empty."<<endl;
        }

};


int main()
{
    int choice;
    do
    {
        cout<<"\n\nDo You Want To Perform \n1. Stack Operations\n2. Queue Operations\n3. Exit\nEnter Your Choice: ";
        cin>>choice;

        if(choice==1)
        {
            Stack S;
            int choice1;
            do
            {
                cout<<"\n\n================== Stack Operations ==================\n";
                cout<<"\n\n1. Push An Element.\n2. Pop An Element.\n3. Top Of Stack.\n4. Exit.\nEnter Your Choice: ";
                cin>>choice1;
                switch(choice1)
                {
                    case 1:
                            S.Push();
                            break;

                    case 2:
                            S.Pop();
                            break;

                    case 3:
                            S.Top();
                            break;

                    case 4:
                            cout<<"You Have Exited Successfully From Stack Operations!!!"<<endl;
                            break;

                    default: cout<<"Invalid Input!!!"<<endl;
                }
            } while(choice1!=4);
        }

        else if(choice==2)
        {
            Queue Q;
            int choice1;
            do
            {
                cout<<"\n\n================== Queue Operations ==================\n";
                cout<<"\n\n1. Insert An Element.\n2. Delete An Element.\n3. Front Element Of Queue.\n4. Rear Element Of Queue.\n5. Exit.\nEnter Your Choice: ";
                cin>>choice1;
                switch(choice1)
                {
                    case 1:
                           Q.Insert();
                            break;

                    case 2:
                            Q.Delete();
                            break;

                    case 3:
                            Q.Front();
                            break;


                    case 4:
                             Q.Rear();
                             break;


                    case 5:
                            cout<<"You Have Exited Successfully From Queue Operations!!!"<<endl;
                            break;

                    default: cout<<"Invalid Input!!!"<<endl;
                }
            } while(choice1!=5);
        }

        else if(choice==3)
             cout<<"You Have Exited Successfully From The Program!!!"<<endl;
        else
            cout<<"Invalid Input!!!"<<endl;
    } while(choice!=3);
}

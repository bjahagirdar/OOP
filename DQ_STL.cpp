/*
Write C++ program using STL for D-queue (Double
ended queue)
*/

#include<iostream>
#include<list>
#define MAX 10
using namespace std;

class Queue
{
    int b,n=0;
    list<int> q;

public:
        void Insert_front()
        {
            if(n<MAX)
            {
               cout<<"Enter The Number To Be Inserted: ";
                cin>>b;
                q.push_front(b);
                cout<<b<<" Has Been Inserted At Front."<<endl;
                n++;
            }
            else
                cout<<"The Queue Is Full \"Overflow\"."<<endl;
        }



        void Insert_back()
        {
            if(n<MAX)
            {
                cout<<"Enter The Number To Be Inserted: ";
                cin>>b;
                q.push_back(b);
                cout<<b<<" Has Been Inserted At Rear."<<endl;
                n++;
            }
            else
                cout<<"The Queue Is Full \"Overflow\"."<<endl;
        }

        void Delete_front()
        {
            if(n!=0)
            {
                cout<<q.front()<<" Has Been Deleted From Front."<<endl;
                q.pop_front();
                n--;
            }
            else
               cout<<"The Queue Is Empty \"Underflow\"."<<endl;
        }


        void Delete_back()
        {
            if(n!=0)
            {
                cout<<q.back()<<" Has Been Deleted From Rear."<<endl;
                q.pop_back();
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

            Queue Q;
            int choice1;
            do
            {
                cout<<"\n\n================== D-Queue Operations ==================\n";
                cout<<"1. Insert An Element At The Front\n2. Insert An Element At The Rear\n3. Delete Element From The Front\n4. Delete Element From The Rear\n5. Display The Element At Front\n6. Display The Element At Rear\n7. Exit\nEnter Your Choice: ";
                cin>>choice1;
                switch(choice1)
                {
                    case 1:
                           Q.Insert_front();
                            break;

                    case 2:
                            Q.Insert_back();
                            break;

                    case 3:
                           Q.Delete_front();
                            break;


                    case 4:
                             Q.Delete_back();
                             break;


                    case 5:
                             Q.Front();
                             break;


                    case 6:
                             Q.Rear();
                             break;

                    case 7:
                            cout<<"You Have Exited Successfully From The Program!!!"<<endl;
                            break;

                    default: cout<<"Invalid Input!!!"<<endl;
                }
            } while(choice1!=7);

}

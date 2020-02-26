/*
Develop an object oriented program in C++ to
create a database of student information
system containing the
following information:
Name,
Roll number,
Class,
division,
Date of Birth,
Blood group,
Contact address,
telephone number,
driving license no. etc

Construct the
database with suitable member functions for
initializing and destroying the data viz
constructor,
default constructor,
Copy constructor,
destructor,
static member functions,
friend class,
this pointer,
inline code
and dynamic memory allocation
operators-new and delete.

*/
#include<stdio.h>
#include<iostream>
using namespace std;

class Student
{
    long int pno,drive;
    int roll;
    string name,div,blood,city,cla,dob;
public:

        Student()
        {
            this->pno=0;
            this->drive=0;
            this->roll=0;
            this->name="";
            this->div="";
            this->blood="";
            this->city="";
            this->cla="";
            this->dob="";
            cout<<"\nThe Default Constructor Has Been Called!!!"<<endl;
        }


        Student(Student &s)
        {
            this->pno=s.pno;
            this->drive=s.drive;
            this->roll=s.roll;
            this->name=s.name;
            this->div=s.div;
            this->blood=s.blood;
            this->city=s.city;
            this->cla=s.cla;
            this->dob=s.dob;
            cout<<"\nThe Copy Constructor Has Been Called!!!"<<endl;

        }


        Student(long int pno,long int drive,int roll,string name,string div,string blood,string city,string cla,string dob)
        {
            this->pno=pno;
            this->drive=drive;
            this->roll=roll;
            this->name=name;
            this->div=div;
            this->blood=blood;
            this->city=city;
            this->cla=cla;
            this->dob=dob;
            cout<<"\nThe Parameterized Constructor Has Been Called!!!"<<endl;
        }


        ~Student()
        {
            cout<<"The Object Has Been Destroyed!!!"<<endl;
        }





        void get()
        {
            cout<<"Enter Details :\n";

            cout<<"Enter The Name: ";

            cin>>name;

            cout<<"Enter The Roll No: ";

            cin>>roll;

            cout<<"Enter The Division: ";

            cin>>div;

            cout<<"Enter The Class: ";

            cin>>cla;

            cout<<"Enter The Contact Number: ";

            cin>>pno;

            cout<<"Enter The Date Of Birth: ";

            cin>>dob;

            cout<<"Enter The Name Of His/Her City: ";

            cin>>city;

            cout<<"Enter The Blood Group: ";

            cin>>blood;

            cout<<"Enter The License No: ";

            cin>>drive;

        }


        void display()
        {
            cout<<" Name\t\tRoll No\t\tDiv\t\tClass\t\tPhone No\t\tDOB\t\tCity\t\tBlood Gr\t\tLicense No"<<endl;

            cout<<name<<"\t\t"<<roll<<"\t\t"<<div<<"\t\t"<<cla<<"\t\t"<<pno<<"\t\t"<<dob<<"\t\t"<<city<<"\t\t"<<blood<<"\t\t"<<drive<<"\t\t"<<endl;
        }


};


int main()
{
    Student *s1,*s2,*s3;

    s1 = new Student;
    s1 -> get();
    s1 -> display();
    s2 = new Student(*s1);
    s2 -> display();
    s3 = new Student(100000000,121879903465,130,"Vicky","A","O+ve","Pune","SE","30/9/99");
    s3 -> display();

    delete s1;
    delete s2;
    delete s3;

}

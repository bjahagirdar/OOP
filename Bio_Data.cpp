/*Create employee bio-data using following classes
i) Personal record
ii)Professional record
iii)Academic record
Assume appropriate data
members and member function to accept required
data & print bio-data. Create bio-data using
multiple inheritance using C++.*/

#include<iostream>
using namespace std;

class Personal
{
    string name,city;

    long int pno;
public:

        void get_personal()
        {
            cout<<"Enter Your Name: ";
            cin>>name;
            cout<<"Enter Your City: ";
            cin>>city;
            cout<<"Enter Your Phone Number: ";
            cin>>pno;
        }

        void display_personal()
        {
            cout<<"Name: "<<name<<"\nCity: "<<city<<"\nPhone Number: "<<pno<<endl;
        }

        string get_name()
        {
            return name;
        }
};


class Professional
{
    int exp;
    string comp,field;
public:

        void get_professional()
        {
            cout<<"Enter Your Years Of Experience: ";
            cin>>exp;
            cout<<"Enter Your Company Name: ";
            cin>>comp;
            cout<<"Enter Your The Field Of Your Work: ";
            cin>>field;
        }

        void display_professional()
        {
            cout<<"Years Of Experience: "<<exp<<"\nCompany Name: "<<comp<<"\nField Of Your Work: "<<field<<endl;
        }
};



class Academic
{
    float sgpa,per;
    string quali;
public:
        void get_academic()
        {
            cout<<"Enter Your SGPA: ";
            cin>>sgpa;
            cout<<"Enter Your Percentage: ";
            cin>>per;
            cout<<"Enter Your Qualification: ";
            cin>>quali;
        }

        void display_academic()
        {
            cout<<"SGPA: "<<sgpa<<"\nPercentage: "<<per<<"\nQualification: "<<quali<<endl;
        }
};


class Bio : public Personal, public Professional, public Academic
{
    string hobby;
public:
        void get()
        {
            get_personal();
            get_professional();
            get_academic();
            cout<<"Enter Your Hobby: ";
            cin>>hobby;
        }

        void display()
        {
            cout<<"\n\n================= "<<get_name()<<"\'s Bio Data =================\n\n";
            display_personal();
            display_professional();
            display_academic();
            cout<<"Hobby: "<<hobby<<endl;
            cout<<"\n====================================================================\n";
        }
};

int main()
{
    Bio b;
    b.get();
    b.display();
}

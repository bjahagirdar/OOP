/*
Write a C++ program that creates an output file,
writes information to it, closes the file and
open it again as an input file and read the
information from the file
*/

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string name,city,college;
	int age,n;
	ofstream out;
	out.open("Info");
	cout<<"Enter Number Of Entries: ";
	cin>>n;
	for(int i=0;i<n;i++)
    {
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Age: ";
        cin>>age;
        cout<<"Enter City: ";
        cin>>city;
        cout<<"Enter College: ";
        cin>>college;
        out<<name<<" "<<age<<" "<<city<<" "<<college<<" ";
    }
    out.close();

    ifstream in;
    in.open("Info");
    cout<<"Name\t\tAge\t\tCity\t\tCollege\n";
    while(in)
    {
         in>>name>>age>>city>>college;
         cout<<name<<"\t\t"<<age<<"\t\t"<<city<<"\t\t"<<college<<"\t\t";
    }
    in.close();
}

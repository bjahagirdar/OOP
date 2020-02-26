/*
Crete User defined exception to check the
following conditions and throw the exception if the
criterion does not meet.
a. User has age between 18 and 55
b. User stays has income between Rs. 50,000 – Rs.
1,00,000 per month
c. User stays in Pune / Mumbai / Bangalore / Chennai
d. User has 4-wheeler
Accept age, Income, City, Vehicle from the user and
check for the conditions mentioned
above. If any of the condition not met then throw
the exception
*/
#include<iostream>
using namespace std;
int main()
{
	string city;
	char car;
	long int income;
	int age;

	try
	{
	    cout<<"Enter Your Age: ";
	    cin>>age;
	    if(age<18 || age>55)
            throw age;

	    cout<<"Enter Your Income: ";
	    cin>>income;
	    if(income<50000 || income>100000)
            throw income;

	    cout<<"Enter Your City: ";
	    cin>>city;
	    if(city!="Pune" || city!="pune" || city!="Mumbai" || city!="mumbai" || city!="Bangalore" || city!="bangalore" || city!="Chennai" ||city!="chennai")
            throw city;

	    cout<<"Do You Have A Car (Y/N): ";
	    cin>>car;
	    if(car=='N' || car=='n')
            throw car;
	}

	catch(int age)
	{
	    cout<<"An Exception Occurred For The Age Entered\nIt Does Not Meet The Criteria!!!"<<endl;
	}

	catch(long int income)
	{
	    cout<<"An Exception Occurred For The Income Entered\nIt Does Not Meet The Criteria!!!"<<endl;
	}

	catch(string city)
	{
	    cout<<"An Exception Occurred For The City Entered\nIt Does Not Meet The Criteria!!!"<<endl;
	}

	catch(char car)
	{
	    cout<<"An Exception Occurred For The 4-wheeler(Y/N) Entered\nIt Does Not Meet The Criteria!!!"<<endl;
	}
}

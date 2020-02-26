/*Write a function template selection Sort. Write a
program that inputs, sorts and outputs an
integer array and a float array.
*/

#include<iostream>
using namespace std;

template<class t>
void sel_sort()
{
    t a[30],temp;
    int n,small;

    cout<<"Enter Number Of Elements: ";
    cin>>n;
    cout<<"Enter The Elements: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
        small=i;
        for(int j=i+1;j<n;j++)
            if(a[small]>a[j])
                small=j;

        temp=a[small];
        a[small]=a[i];
        a[i]=temp;

    }

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}


int main()
{
    char choice;
    cout<<"Do you want to sort integer numbers or float numbers (I/F): ";
    cin>>choice;

    if(choice=='i' || choice=='I')
        sel_sort<int>();
    else if(choice=='f' || choice=='F')
        sel_sort<float>();
    else
        cout<<"Invalid Input"<<endl;

}

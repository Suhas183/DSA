#include <iostream>
using namespace std;

int main()
{
    int marks[100];

    int n;
    cout<<"Enter the number of students:- ";
    cin>>n;

    cout<<"Enter the marks of students:-"<<endl;

    for(int i = 0; i < n; i++)
    {
        cin>>marks[i];
    }

    cout<<"The marks of the students are:-"<<endl;

    for(int i = 0; i < n; i++)
    {
        cout<<marks[i]<<endl;
    }

    return 0;
}
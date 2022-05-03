#include <iostream>
using namespace std;

int main()
{
    int p = 10;
    cout<<&p<<endl;


    int *q = &p;

    // int *q;
    // q = &p;
    cout<<q<<endl;

    //Adress of a pointer variable
    cout<<&q<<endl;

    int* *z = &q;
    cout<<z<<endl;
}
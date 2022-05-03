#include <iostream>
using namespace std;

//If we print the size of a inside the function we will get 8 bytes, whereas if we print the size of a in main we will get 24 bytes
//pass by reference
void printarray(int a[], int n)
{
    a[0] = 100;

    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
}

int main()
{
    int a[] = {1,3,2,5};
    int n = sizeof(a)/sizeof(int);

    printarray(a,n);

    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }

    return 0;
}
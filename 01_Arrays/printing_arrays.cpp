#include <iostream>
using namespace std;

void printing_arrays(int a[], int n)
{
    for(int i = 0; i < n; i++) // get the first element
    {
        for(int j = i; j < n; j++) //get the last element
        {
            for(int k = i; k <= j; k++) //print the elements
            {
                cout<<a[k]<<", ";
            }

            cout<<endl;
        }
    }
}

int main()
{
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(int);

    printing_arrays(a,n);
}
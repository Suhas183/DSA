#include <iostream>
using namespace std;

int main()
{
    int a[] = {1,3,5,7,9,6};
    int n = sizeof(a)/sizeof(int);
    int key = 6;


    for(int i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            cout<<"Element found at index "<<i;
            return 0;
        }
    }

    cout<<"Element not found";
    return 0;
}
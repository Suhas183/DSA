#include <iostream>
using namespace std;

int bin_search(int a[], int n, int key)
{
    int s = 0;
    int e = n - 1;

    while(s<e)
    {
        int mid = (s + e)/2;

        if(a[mid] > key)
        {
            e = mid - 1;
        }

        else if(a[mid] < key)
        {
            s = mid + 1;
        }

        else
        {
            return mid;
        }
    }

    return -1;
}

int main()
{
    int a[] = {1,4,9,16,25,36,49};
    int n = sizeof(a)/sizeof(int);

    int key;
    cout<<"Enter key:- ";
    cin>>key;

    int index = bin_search(a,n,key);

    if(index >= 0)
    {
        cout<<"Element found at index "<<index;
    }

    else
    {
        cout<<"Element not found";
    }

    return 0;
}
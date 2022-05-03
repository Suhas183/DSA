#include <iostream>
using namespace std;

void insertion_sort(int a[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int current = a[i];
        int prev = i - 1;

        while(a[prev] > current && prev >= 0)
        {
            a[prev + 1] = a[prev];
            prev = prev - 1;
        }

        a[prev + 1] = current;
    }

    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int a[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(a)/sizeof(int);

    insertion_sort(a,n);
}
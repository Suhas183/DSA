#include <iostream>
using namespace std;

void bubble_sort(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i; j++)
        {
            if(a[j] > a[j + 1])
            {
                swap(a[j],a[j+1]);
            }
        }
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

    bubble_sort(a,n);
}
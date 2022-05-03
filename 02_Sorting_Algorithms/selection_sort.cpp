#include <iostream>
using namespace std;

void selection_sort(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int min_element = a[i], min_position = i;
        for(int j = i + 1; j < n; j++)
        {
            if(a[j] < min_element)
            {
                min_element = a[j];
                min_position = j;
            }
        }

        swap(a[i],a[min_position]);
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

    selection_sort(a,n);
}
#include <iostream>
using namespace std;

int largest_sum(int a[], int n)
{
    int cs = 0, ms = 0;

    for(int i = 0; i < n; i++)
    {
        cs = cs + a[i];

        if(cs < 0)
        {
            cs = 0;
        }

        ms = max(cs,ms);
    }

    return ms;
}

int main()
{
    int a[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(a)/sizeof(int);

    cout<<largest_sum(a,n);
}
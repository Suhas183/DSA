#include <iostream>
using namespace std;

int largest_sum(int a[], int n)
{
    int ps[n] = {a[0]};
    for(int i = 1; i < n; i++)
    {
        ps[i] = ps[i-1] + a[i];
    }

    int max_sum = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            int sum = i > 0 ? ps[j] - ps[i - 1] : ps[j];
            max_sum = max(sum,max_sum);
        }
    }

    return max_sum;
}

int main()
{
    int a[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(a)/sizeof(int);

    cout<<largest_sum(a,n);
}
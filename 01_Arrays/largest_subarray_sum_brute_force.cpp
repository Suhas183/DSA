#include <iostream>
using namespace std;

int largest_sum(int a[], int n)
{
    int max_sum = 0;

    for(int i = 0; i < n; i++) // get the first element
    {
        for(int j = i; j < n; j++) //get the last element
        {
            int sub_sum = 0;
            for(int k = i; k <= j; k++) //print the elements
            {
                sub_sum = sub_sum + a[k];
            }

            max_sum = max(max_sum,sub_sum);
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
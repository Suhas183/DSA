#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n)
{
    if(n == 0 or n == 1)
    {
        return 1;
    }

    if((arr[0] < arr[1]) and isSorted(arr + 1, n -1))
    {
        return true;
    }

    return false;
}

int main()
{
    int a[] = {1,2,4,6,7,8};
    int n = sizeof(a)/sizeof(int);

    cout<<isSorted(a,n);
    return 0;
}
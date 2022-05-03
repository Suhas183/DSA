#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int last_occurence(int a[], int n, int key)
{
    if(n == 0)
    {
        return - 1;
    }

    int subIndex = last_occurence(a + 1, n - 1, key);
    if(subIndex == -1)
    {
        if(a[0] == key)
        {
            return 0;
        }

        else
        {
            return -1;
        }
    }

    else
    {
        return subIndex + 1;
    }
}

int main()
{
    int a[] = {1,3,5,8,7,6,2,7,11,21};
    int n = sizeof(a)/sizeof(int);
    int key = 7;    

    cout<<last_occurence(a,n,key);
    return 0;
}
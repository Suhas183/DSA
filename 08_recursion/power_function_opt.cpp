#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fast_power(int a, int n)
{
    if(n == 0)
    {
        return 1;
    }

    int subPower = fast_power(a,n/2);
    subPower = subPower*subPower;

    if(n & 1)
    {
        return a*subPower;
    }

    else
    {
        return subPower;
    }
}

int main()
{
    int a, n;
    a = 5;
    n = 3;

    cout<<fast_power(a,n);
    return 0;
}
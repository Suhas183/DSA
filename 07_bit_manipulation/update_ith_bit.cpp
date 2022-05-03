#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int get_ith_bit(int n, int i)
{
    int temp = 1 << i;

    if(temp & n > 0)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

int main()
{
    int n, i;
    cin>>n>>i;

    cout<<get_ith_bit(n,i);
    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int decimal_binary(int n)
{
    int ans = 0;
    int i = 1;

    while(n > 0)
    {
        int temp = n & 1;
        ans = ans + i*temp;
        i = i * 10;
        n = n >> 1;
    }

    return ans;
}

int main()
{
    int n;
    cin>>n;

    cout<<decimal_binary(n);
    return 0;
}
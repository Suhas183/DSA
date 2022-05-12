#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i = 1; i <= 2*n - 1; i++)
    {
        int cols = i <= n ? i : 2*n - i;
        int spaces = n - cols;

        for(int s = 0; s < spaces; s++)
        {
            cout<<" ";
        }

        for(int j = cols; j >= 1; j--)
        {
            cout<<j;
        }

        for(int j = 2; j <= cols; j++)
        {
            cout<<j;
        }

        cout<<endl;
    }
    return 0;
}
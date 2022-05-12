#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i = 0; i < 2*n; i++)
    {
        int totalCols = i < n - 1 ? i + 1 : 2*n - i - 1;
        int spaces = n - totalCols;

        for(int j = 0; j < spaces; j++)
        {
            cout<<" ";
        }

        for(int j = 0; j < totalCols; j++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }
    return 0;
}
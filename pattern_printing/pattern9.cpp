#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int original = n;
    n = 2*n;

    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= n; j++)
        {
            int temp = original - min(min(min(i,j),n-i),n-j);
            cout<<temp;
        }
        cout<<endl;
    }
    return 0;
}
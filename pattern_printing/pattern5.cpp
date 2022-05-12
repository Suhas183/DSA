#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i = 0; i < 2*n - 1; i++)
    {
        int temp = i < n - 1 ? i + 1 : 2*n - i - 1;

        for(int j = 0; j < temp; j++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }
    return 0;
}
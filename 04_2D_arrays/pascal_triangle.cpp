#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        for(int s = 0; s < n - i - 1; s++)
        {
            cout<<" ";
        }

        int temp = 1;
        int num = i;
        int den = 1;

        for(int j = 0; j < i + 1; j++)
        {
            cout<<temp<<" ";
            temp = temp*num;
            temp = temp/den;
            num--;
            den++;
        }

        cout<<endl;
    }
    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);

    int n = s.length();
    string temp;

    for(int i = 0; i < n; i++)
    {
        if(!ispunct(s[i]))
        {
            temp.push_back(s[i]);
        }
    }

    s = temp;
    cout<<s<<endl;
    return 0;
}
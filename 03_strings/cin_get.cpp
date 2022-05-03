#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char sentence[100];
    char temp = cin.get();
    int len = 0;

    while(temp != '#')
    {
        sentence[len++] = temp;
        temp = cin.get();
    }

    sentence[len] = '\0';

    cout<<sentence<<endl;
    cout<<endl<<"Length is "<<len;
}
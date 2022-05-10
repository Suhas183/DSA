#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool check_pangram(char sentence[], int length)
{
    vector<bool> mark(26,false);
    int temp;

    for(int i = 0; i < length; i++)
    {
        if(sentence[i] >= 'A' and sentence[i] <= 'Z')
        {
            temp = sentence[i] - 'A';
        }

        else if(sentence[i] >= 'a' and sentence[i] <= 'z')
        {
            temp = sentence[i] - 'a';
        }

        else
        {
            continue;
        }

        mark[temp] = true;
    }

    for(int i = 0; i < 26; i++)
    {
        if(mark[i] == false)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char sentence[1000];
    cin.getline(sentence,1000);
    int len = strlen(sentence);

    cout<<check_pangram(sentence,len)<<endl;
    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void subsets(char *input, char *output, int i, int j)
{
    if(input[i] == '\0')
    {
        output[j] = '\0';
        cout<<output<<endl;
        return;
    }

    //Inclusive
    output[j] = input[i];
    subsets(input,output,i+1,j+1);

    //exclusive
    subsets(input,output,i+1,j);
}

int main()
{
    char input[100];
    char output[100];

    cin>>input;

    subsets(input,output,0,0);
    return 0;
}
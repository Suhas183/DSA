#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print_subsequences(int i, vector<int> &input, vector<int> &output)
{
    if(i == input.size())
    {
        if(output.size() == 0)
        {
            cout<<"NULL"<<endl;
        }

        //printing the elements
        for(int j = 0; j < output.size(); j++)
        {
            cout<<output[j]<<" ";
        }

        cout<<endl;
        return;
    }

    //pick
    output.push_back(input[i]);
    print_subsequences(i + 1,input,output);

    //not pick
    output.pop_back();
    print_subsequences(i + 1,input,output);
}

int main()
{
    vector<int> input = {3,1,2};
    vector<int> output;

    print_subsequences(0,input,output); 
    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print_subsequences(int i, vector<int> &input, vector<int> &output, int sum, int k)
{
    if(i == input.size())
    {
        if(sum == k)
        {
        for(int j = 0; j < output.size(); j++)
        {
            cout<<output[j]<<" ";
        }

        cout<<endl;
        }
        return;
    }

    //pick
    output.push_back(input[i]);
    sum += input[i];
    print_subsequences(i + 1,input,output,sum,k);

    //not pick
    sum -= input[i];
    output.pop_back();
    print_subsequences(i + 1,input,output,sum,k);
}

int main()
{
    vector<int> input = {1,1,2};
    vector<int> output;

    print_subsequences(0,input,output,0,2); 
    return 0;
}
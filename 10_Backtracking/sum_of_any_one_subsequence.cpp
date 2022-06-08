#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool print_subsequences(int i, vector<int> &input, vector<int> &output, int sum, int k)
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
        return true;
        }
        return false;
    }

    //pick
    output.push_back(input[i]);
    sum += input[i];
    if(print_subsequences(i + 1,input,output,sum,k) == true)
    {
        return true;
    }

    //not pick
    sum -= input[i];
    output.pop_back();
    
    if(print_subsequences(i + 1,input,output,sum,k) == true)
    {
        return true;
    }

    return false;
}

int main()
{
    vector<int> input = {1,1,2};
    vector<int> output;

    print_subsequences(0,input,output,0,2); 
    return 0;
}
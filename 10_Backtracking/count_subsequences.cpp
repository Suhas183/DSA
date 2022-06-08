#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int count_subsequences(int i, vector<int> &input, int sum, int k)
{
    if(i == input.size())
    {
        if(sum == k)
        {
        return 1;
        }
        return 0;
    }

    //pick
    sum += input[i];
    int l = count_subsequences(i + 1,input,sum,k);

    //not pick
    sum -= input[i];
    int r = count_subsequences(i + 1,input,sum,k);

    return l + r;
}

int main()
{
    vector<int> input = {1,1,2};

    cout<<count_subsequences(0,input,0,2)<<endl; 
    return 0;
}
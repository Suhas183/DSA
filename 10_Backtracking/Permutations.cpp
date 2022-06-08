#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void permutations(vector<int> v, int n, int ind, vector<int> map, vector<int> temp)
{
    if(ind == n)
    {
        for(int i = 0; i < temp.size(); i++)
        {
            cout<<temp[i]<<" ";
        }

        cout<<endl;
        return;
    }
    for(int i = 0; i < n; i++)
    {
        if(map[i] == 0)
        {
            map[i] = 1;
            temp.push_back(v[i]);
            permutations(v,n,ind + 1,map,temp);
            temp.pop_back();
            map[i] = 0;
        }
    }
}

int main()
{
    vector<int> v = {3,1,2};
    int n = v.size();
    vector<int> map(n,0);
    vector<int> temp;
    permutations(v,n,0,map,temp);

    return 0;
}
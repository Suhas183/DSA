#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int bin_search(vector<int> v, int k)
{
    int n = v.size();
    int s = 0;
    int e = n - 1;

    while(s <= e)
    {

    int mid = (s + e)/2;
    
        if(v[mid] == k)
        {
            return mid;
        }

        if(v[mid] >= v[s])
        {
            if(v[s] <= k and v[mid] >= k)
            {
                e = mid - 1;
            }

            else
            {
                s = mid + 1;
            }
        }


        else
        {
            if(v[mid] <= k and v[e] >= k)
            {
                s = mid + 1;
            }

            else
            {
                e = mid - 1;
            }
        }
    }

    return -1;
}

int main()
{
    vector<int> a = {5,7,9,0,1,3,4};
    cout<<bin_search(a,5)<<endl;
    return 0;
}
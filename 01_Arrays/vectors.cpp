#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //initialization
    vector<int> v = {12,4,5,7,3};
    cout<<v.size();

    //initialization using fill constructor
    vector<int> vec(10,0);

    //pusback
    v.push_back(12);

    //popback
    v.pop_back();
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Demo Vector
    vector<int> arr = {1,2,3};

    cout<<arr.size()<<" "<<arr.capacity()<<endl;
    cout<<&arr<<endl;

    arr.push_back(4);
    cout<<arr.size()<<" "<<arr.capacity()<<endl;
    cout<<&arr;


    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {10,11,2,3,4,6,7,8};
    int key;
    cin>>key;

    vector<int>::iterator it = find(v.begin(),v.end(),key);

    if(it != v.end())
    {
        cout<<"Element found at index "<<(it - v.begin());
    }

    else
    {
        cout<<"Element not found";
    }

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> v = 
    {{1,2,3},
     {4,5,6,-1},
     {7,8,9}};

    for(int i = 0; i < v.size(); i++)
    {
        for(int number : v[i])
        {
            cout<<number<<" ";
        }

        cout<<endl;
    } 

    return 0;
}
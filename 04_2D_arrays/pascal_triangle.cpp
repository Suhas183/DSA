#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<vector<int>> v;

    for(int i = 0; i < n; i++)
    {
        int count = 0;
        v.push_back(vector<int>());

        for(int j = 0; j < n + i; j++)
        {
            if(n - i - j - 1 == 0 or j == n + i - 1)
            {
                v[i].push_back(1);
                cout<<"1";
            }

            else if(n - i - j - 1 < 0 && (n - i - j - 1) % 2 == 0)
            {
                v[i].push_back(v[i-1][count] + v[i-1][count + 1]);
                cout<<(v[i-1][count] + v[i-1][count + 1]);
                count++;
            }

            else
            {
                cout<<" ";
            }
        }

        cout<<endl;
    }
}
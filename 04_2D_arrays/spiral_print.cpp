#include <iostream>
using namespace std;

int main()
{
    int num[10][10];

    int n, m;
    cin>>n>>m;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin>>num[i][j];
        }
    }

    int sr = 0;
    int er = n - 1;
    int sc = 0;
    int ec = m - 1;

    while(sc <= ec)
    {
        for(int i = sr; i <= ec; i++)
        {
            cout<<num[sr][i]<<" ";
        }

        for(int i = sr + 1; i <= er; i++)
        {
            cout<<num[i][ec]<<" ";
        }

        for(int i = ec - 1; i >= sc; i--)
        {
            cout<<num[er][i]<<" ";
        }

        for(int i = er - 1; i >= sr + 1; i--)
        {
            if(sc == ec)
            {
                break;
            }
            cout<<num[i][sc]<<" ";
        }

        sr++;
        sc++;
        er--;
        ec--;
    }


}
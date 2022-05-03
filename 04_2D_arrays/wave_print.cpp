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
    int sc = m - 1;
    int ec = 0;

    while(sc >= ec)
    {
        for(int i = sr; i <= er; i++)
        {
            cout<<num[i][sc]<<" ";
        }

        sc--;

        for(int i = er; i >= sr; i--)
        {
            if(sc < 0)
            {
                break;
            }
            cout<<num[i][sc]<<" ";
        }

        sc--;
    }

}
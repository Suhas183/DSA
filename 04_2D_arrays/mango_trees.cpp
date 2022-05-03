#include <iostream>
using namespace std;

int min_num(int a, int b, int c, int d)
{
    int m1,m2,m;
    if(a < b)
    {
        m1 = a;
    }

    else
    {
        m1 = b;
    }

    if(c < d)
    {
        m2 = c;
    }

    else
    {
        m2 = d;
    }

    if(m1 < m2)
    {
        return m1;
    }

    else
    {
        return m2;
    }
}

int main()
{
    char trees[][10] = {" ##   ",
                        "#  ## ",
                        " #    ",
                        " ##  #",
                        "#  ## ",
                        " #    "};


    int pre[10][10] = {0};

    if(trees[0][0] == '#')
    {
        pre[0][0] = 1;
    }

    for(int i = 1; i < 6; i++)
    {
        if(trees[0][i] == '#')
        {
            pre[0][i] = 1 + pre[0][i-1];
        }

        else
        {
            pre[0][i] = pre[0][i-1];
        }
    }

    for(int i = 1; i < 6; i++)
    {
        if(trees[i][0] == '#')
        {
            pre[i][0] = 1 + pre[i-1][0];
        }

        else
        {
            pre[i][0] = pre[i-1][0];
        }
    }

    for(int i = 1; i < 6; i++)
    {
        for(int j = 1; j < 6; j++)
        {
            if(trees[i][j] == '#')
            {
                pre[i][j] = 1 - pre[i-1][j-1] + pre[i][j-1] + pre[i-1][j];
            }

            else
            {
                pre[i][j] =  - pre[i-1][j-1] + pre[i][j-1] + pre[i-1][j];
            }
        }
    }

    int s1,s2,s3,s4;
    int maximum = 0;

    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            s1 = pre[i][j];
            s2 = pre[5][j] - s1;
            s3 = pre[i][5] - s1;
            s4 = pre[5][5]- s1 - s2 - s3;

            int minimum = min_num(s1,s2,s3,s4);
            maximum = max(maximum,minimum);
        }
    }

    cout<<maximum;
}
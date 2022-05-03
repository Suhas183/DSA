#include <iostream>
using namespace std;

void replace_bits(int &n, int m, int i, int j)
{
    int temp = (-1 << (j + 1));
    temp = temp | (~(-1 << i));
    n = n & temp;

    temp = m << i;
    n = n | temp;
}

int main()
{
    int n, m, i, j;
    cin>>n>>m>>i>>j;

    replace_bits(n,m,i,j);
    cout<<n;

    return 0;
}
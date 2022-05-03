#include <iostream>
using namespace std;

void clear_range(int &n, int i, int j)
{
    int temp = (-1 << (j + 1));
    temp = temp | (~(-1 << i));
    n = n & temp;
}

int main()
{
    int n, i, j;
    cin>>n>>i>>j;

    clear_range(n,i,j);

    cout<<n;
}
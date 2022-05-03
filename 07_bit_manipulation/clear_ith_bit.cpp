#include <iostream>
using namespace std;

void clear_ith_bit(int &n, int i)
{
    int temp = ~(1 << i);

    n = n & temp;
}

int main()
{
    int n,i;
    cin>>n>>i;

    clear_ith_bit(n,i);
    cout<<n;
}
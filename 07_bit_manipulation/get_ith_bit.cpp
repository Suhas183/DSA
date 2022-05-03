#include <iostream>
using namespace std;

int get_ith_bit(int x,int i)
{
    int temp = 1 << i;
    return (x & temp) > 0 ? 1 : 0;
}

int main()
{
    int x, i;
    cin>>x>>i;

    cout<<get_ith_bit(x,i);

    return 0;
}
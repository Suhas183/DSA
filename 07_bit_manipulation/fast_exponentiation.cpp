#include <iostream>
using namespace std;

int fast_exponentiation(int a, int n)
{
    int ans = 1;

    while(n > 0)
    {
        int temp = n & 1;

        if(temp == 1)
        {
            ans = ans * a;
        }

        a = a*a;
        n = n >> 1;
    }

    return ans;
}

int main()
{
    int a, n;
    cin>>a>>n;

    cout<<fast_exponentiation(a,n);
}
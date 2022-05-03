#include <iostream>
using namespace std;

int count_bits(int n)
{
    int count = 0;

    while(n > 0)
    {
        int temp = n & 1;

        if(temp == 1)
        {
            count++;
        }
        n = n >> 1;
    }

    //Alternate way -- > faster method
    // while(n > 0)
    // {
    //     n = n & (n -1);
    //     count++;
    // }

    return count;
}

int main()
{
    int n;
    cin>>n;

    cout<<count_bits(n);
}
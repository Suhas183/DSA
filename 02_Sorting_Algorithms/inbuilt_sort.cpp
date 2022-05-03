#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int x, int y)
{
    return x > y;//if we want to get the answer in descending form
}

int main()
{
    int a[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(a)/sizeof(int);   

    sort(a,a + n,compare);
    // reverse(a,a+n); to get in descending order

    //sort(a,a+n,greater<int>())  using an in-built comparator

    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
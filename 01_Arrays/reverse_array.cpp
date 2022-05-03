#include <iostream>
using namespace std;

void reverse_array(int a[], int n)
{
    int s = 0;
    int e = n - 1;

    while(s < e)
    {
        swap(a[s],a[e]);
        s++;
        e--;
    }

    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
}

int main()
{
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(int);

    reverse_array(a,n);
}
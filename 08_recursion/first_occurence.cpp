#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int first_occurence(int a[], int n, int key)
{
    if(n == 0)
    {
        return -1;
    }

    if(a[0] == key)
    {
        return 0;
    }

    int sub_Index = first_occurence(a + 1, n - 1, key);
    if(sub_Index != -1)
    {
        return sub_Index + 1;
    }

    return -1;
}
int main()
{
    int a[] = {1,5,12,44,13,12,55,3};
    int n = sizeof(a)/sizeof(int);
    int key = 12;


    return 0;
}
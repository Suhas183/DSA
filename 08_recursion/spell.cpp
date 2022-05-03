#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string spell[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void print_nums(int n)
{
    if(n == 0)
    {
        return;
    }

    int temp = n % 10;
    print_nums(n/10);
    cout<<spell[temp]<<" ";
}

int main()
{
    int n;
    cin>>n;

    print_nums(n);
    return 0;
}
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[] = {'a','b','c','d','\0'};

    cout<<a<<endl;
    cout<<strlen(a)<<endl;
    cout<<sizeof(a)<<endl;

    return 0;
}
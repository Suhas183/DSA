#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[1000] = "apple";
    char b[1000];

    //calculates length
    cout<<strlen(a)<<endl;

    //copies string
    strcpy(b,a);
    cout<<b<<endl;

    //compare strings, 0 if equal, 1 if a > b, 1 if a < b
    cout<<strcmp(a,b)<<endl;

    //concatinate strings
    cout<<strcat(a,b);
    
}
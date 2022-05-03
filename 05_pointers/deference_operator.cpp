#include <iostream>
using namespace std;

int main()
{
    // &bucket   =>  address
    // *address  =>  bucket
    // *(&x) = x

    int x = 10;
    int *ptr = &x;

    //Gives address
    cout<<ptr<<endl;

    //Gives the value of bucket
    cout<<x<<endl;

    //NULL pointer
    int *a = 0;
    int *b = NULL;

}
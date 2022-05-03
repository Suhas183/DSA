#include <iostream>
using namespace std;

void watchVideo(int *views) //since we passed address, we need a pointer to grab
{
    *views = *views + 1; //using dereference operator we can change the original value of views
}

int main()
{
    int views = 100;

    watchVideo(&views); //passing address to the function
    cout<<views;
}
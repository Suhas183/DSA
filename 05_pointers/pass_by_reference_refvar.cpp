#include <iostream>
using namespace std;

void applyTax(float &money)
{
    float tax = 0.10;
    money = money - money*tax;
}

int main()
{
    float income;
    cin>>income;

    applyTax(income);

    cout<<income;
}
#include <iostream>
using namespace std;

int main()
{
    int alphabets = 0;
    int spaces = 0;
    int digits = 0;

    char temp = cin.get();

    while(temp != '\n')
    {
        if(temp >= '0' and temp <= '9')
        {
            digits++;
        }

        else if((temp >= 'A' and temp <= 'Z') or (temp >= 'a' and temp <= 'z'))
        {
            alphabets++;
        }

        else if(temp == ' ')
        {
            spaces++;
        }

        temp = cin.get();
    }

    cout<<digits<<" "<<alphabets<<" "<<spaces;
    return 0;
}
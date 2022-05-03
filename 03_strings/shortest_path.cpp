#include <iostream>
using namespace std;

int main()
{
    char directions[1000];
    cin.getline(directions,1000);

    int i = 0;
    int x = 0;
    int y = 0;

    while(directions[i++] != '\n')
    {
        switch (directions[i])
        {
        case 'N':       
        y++;
        break;

        case 'S':
        y--;
        break;

        case 'E':
        x++;
        break;

        case 'W':
        x--;
        break;
        }
    }

    //only when x and y both are positive
    while(y--)
    {
        cout<<'N';
    }

    while(x--)
    {
        cout<<'E';
    }
}
#include <iostream>
using namespace std;

int main()
{
    char names[][10] = {"Suhas", "Herle", "Asha", "Herle"};

    for(int i = 0; i < 4; i++)
    {
        cout<<names[i]<<endl;
    }

    return 0;

}
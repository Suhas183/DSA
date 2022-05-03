#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char sentence[1000];
    char lar_sentence[1000];

    int largest = 0;

    cin.get(); //imp step here

    while(n--)
    {
        cin.getline(sentence,1000);
        int len = strlen(sentence);

        if(len > largest)
        {
            strcpy(lar_sentence,sentence);
            largest = len;
        }
    }

    cout<<lar_sentence;
}
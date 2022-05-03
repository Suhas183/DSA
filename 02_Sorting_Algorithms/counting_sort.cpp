#include <iostream>
#include <vector>
using namespace std;

void counting_sort(int *a, int n)
{
    int largest = a[0];

    //finding max element
    for(int i = 1; i < n; i++)
    {
        largest = max(largest,a[i]);
    }

    //making a frequency array
    // int *freq = new int(largest + 1);
    vector<int> freq(largest+1,0);


    for(int i = 0; i < n; i++) // only till n because only n elements are there in array
    {
        freq[a[i]]++;
    }

    int j = 0;
    for(int i = 0; i <= largest; i++)
    {
        while(freq[i] > 0)
        {
            a[j] = i;
            freq[i]--;
            j++;
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int a[] = {88,97,10,12,15,1,5,6,12,5,8};
    int n = sizeof(a)/sizeof(int);

    counting_sort(a,n);
}
#include <iostream>
using namespace std;

//Output -- also we are passing by reference just like 1D array
void print_array(int a[][100], int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main()
{
    int arr[100][100];

    //No. of rows and columns
    int m, n;
    cin>>m>>n;

    //Input
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }

    print_array(arr,m,n);

    return 0;
}
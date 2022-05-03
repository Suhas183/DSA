#include <iostream>
using namespace std;

int main()
{
    int arr[][4] = {{10,20,30,40},
                    {15,25,35,45},
                    {27,29,37,48},
                    {32,33,39,50}};

    int n = 4, m = 4, key = 33;

    int sr = 0;
    int sc = m - 1;
    while(sr <= m -1 && sc >= 0)
    {
        if(arr[sr][sc] == key)
        {
            cout<<"Element found at "<<sr<<" "<<sc;
            break;
        }

        else if(arr[sr][sc] > key)
        {
            sc--;
        }

        else
        {
            sr++;
        }
    }           

}
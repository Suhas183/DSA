#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition_helper(vector<int> &v, int s, int e)
{
    int pivot = v[e];
    int i = s - 1;

    for(int j = s; j < e; j++)
    {
        if(v[j] < pivot)
        {
            i++;
            swap(v[i],v[j]);
        }
    }

    swap(v[i+1],v[e]);
    return i + 1;
}

void quicksort(vector<int> &v, int s, int e)
{
    if(s >= e)
    {
        return;
    }

    int p = partition_helper(v,s,e);
    quicksort(v,s,p-1);
    quicksort(v,p+1,e);
}

int main()
{
    vector<int> arr{10,5,2,0,7,6,4};
    int s = 0;
	int e = arr.size()-1;
  	quicksort(arr,s,e);
	for(int x : arr){
		cout<< x <<",";
	}
	cout<<endl;
    return 0;
}
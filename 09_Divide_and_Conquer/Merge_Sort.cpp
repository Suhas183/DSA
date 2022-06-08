#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void helper_merge(vector<int> &v, int s, int e)
{
    int mid = (s + e)/2;
    int i = s;
    int j = mid + 1;

    vector<int> temp;

    while(i <= mid and j <= e)
    {
        if(v[i] < v[j])
        {
            temp.push_back(v[i]);
            i++;
        }

        else
        {
            temp.push_back(v[j]);
            j++;
        }
    }

    while(i <= mid)
    {
        temp.push_back(v[i++]);
    }

    while(j <= e)
    {
        temp.push_back(v[j++]);
    }

    int k = 0;

    for(int x = s; x <= e; x++)
    {
        v[x] = temp[k++];
    }

    return;
}

void mergesort(vector<int> &v, int s, int e)
{
    if(s == e)
    {
        return;
    }

    int mid = (s + e)/2;

    mergesort(v,s,mid);
    mergesort(v,mid + 1, e);

    helper_merge(v,s,e);
}

int main()
{
  	vector<int> arr{10,5,2,0,7,6,4};

	int s = 0;
	int e = arr.size()-1;
  	mergesort(arr,s,e);
	for(int x : arr){
		cout<< x <<",";
	}
	cout<<endl;

    return 0;
}
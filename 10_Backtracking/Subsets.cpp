#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool comapre(string a, string b)
{
    if(a.length() == b.length())
    {
        return a < b;
    }

    return a.length() < b.length();
}

void subsets(char *input, char *output, int i, int j, vector<string> & list_subsets)
{
    if(input[i] == '\0')
    {
        output[j] = '\0';
		string temp(output);
		list_subsets.push_back(output);
		return;
    }

    //Inclusive
    output[j] = input[i];
    subsets(input,output,i+1,j+1,list_subsets);

    //exclusive
    subsets(input,output,i+1,j,list_subsets);
}

int main()
{
    char input[100];
    char output[100];
	vector<string> list_subsets;

    cin>>input;

    subsets(input,output,0,0,list_subsets);
	sort(list_subsets.begin(),list_subsets.end(),comapre);

	int n = list_subsets.size();

	for(int i = 0; i < n; i++)
	{
		cout<<list_subsets[i]<<endl;
	}
    return 0;
}
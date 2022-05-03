#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int calculateMarks(vector<int> v)
{
    int n = v.size();
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum = sum + v[i];
    }

    return sum;
}

bool compare(pair<string,vector<int>> m1, pair<string,vector<int>> m2)
{
    vector<int> v1 = m1.second;
    vector<int> v2 = m2.second;

    return calculateMarks(v1) > calculateMarks(v2);
}



int main(){
		vector<pair<string,vector<int> > >  student_marks = {
			{"Rohan", {10,20,11}},
			{"Prateek",{10,21,3}},
			{"Vivek",{4,5,6}},
			{"Rijul",{10,13,20}}
	};

    sort(student_marks.begin(),student_marks.end(),compare);

    for(auto s : student_marks)
    {
        cout<<s.first<<" "<<calculateMarks(s.second)<<endl;
    }
    
	return 0;
}
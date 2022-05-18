#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void permutation(string s,int i){
    //base case
    if(i==s.length()){
        cout<<s<<endl;
        return ;
    }
 
 
    //recursive case
    for(int j=i;j<s.length();j++){
        swap(s[i],s[j]);
        permutation(s,i+1);
        swap(s[i],s[j]);
    }
    return ;
}

int main()
{
    string s;
    cin>>s;

    permutation(s,0);
    return 0;
}
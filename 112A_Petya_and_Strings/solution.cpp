#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(1) auxiliary, O(n) total

string f(string &s1,string &s2){
    for(int i=0;i<s1.size();i++){
        if(tolower(s1[i])>tolower(s2[i])) return "1";
        else if(tolower(s1[i])<tolower(s2[i])) return "-1";
    }
    return "0";
}

int main(){

    string s1,s2;
    cin>>s1>>s2;
    cout<<f(s1,s2)<<endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(1) auxiliary, O(n) total

int main(){

    string s1,s2;
    cin>>s1>>s2;
    reverse(s1.begin(),s1.end());
    if(s1==s2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(1) - set stores at most 26 distinct characters

int main(){

    string s;
    cin>>s;
    unordered_set<char>st;
    for(char &c:s){
        st.insert(c);
    }
    if(st.size()%2==0)  cout<<"CHAT WITH HER!\n";
    else    cout<<"IGNORE HIM!\n";

    return 0;
}
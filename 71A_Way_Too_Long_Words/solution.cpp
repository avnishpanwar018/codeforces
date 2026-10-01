#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(n)

int main(){

    int n;
    cin>>n;
    vector<string> words(n);
    for(int i=0;i<n;i++){
        cin>>words[i];
    }
    for(int i=0;i<n;i++){
        if(words[i].length()>10){
            words[i]=words[i][0]+to_string(words[i].length()-2)+words[i][words[i].length()-1];
        }
    }
    for(auto val:words){
        cout<<val<<endl;
    }
 
    return 0;
}
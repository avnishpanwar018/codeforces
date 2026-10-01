#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(n)

int f(vector<vector<int>>&v){
    int ans=0;
    for(auto i:v){
        int sure=0;
        for(int j:i){
            if(j==1) sure++;
        }
        if(sure>=2) ans++;
    }
    return ans;
}

int main(){

    int n;
    cin>>n;
    vector<vector<int>>v(n,vector<int>(3,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>v[i][j];
        }
    }
    cout<<f(v)<<endl;

    return 0;
}
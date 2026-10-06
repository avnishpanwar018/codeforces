#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(1) auxiliary, O(n) total

int main(){

    int n,h;
    cin>>n>>h;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=0;
    for(int x:a){
        if(x<=h) ans++;
        else ans+=2;
    }
    cout<<ans<<endl;

    return 0;
}
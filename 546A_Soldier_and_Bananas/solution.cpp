#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(w)
// Space Complexity: O(1)

int main(){

    int k,n,w;
    cin>>k>>n>>w;
    long long total=0;
    for(int i=1;i<=w;i++){
        total+=i*k;
    }
    cout<<max(0LL,total-n)<<'\n';

    return 0;
}
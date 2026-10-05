#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(k)
// Space Complexity: O(1) auxiliary, O(1) total

int main(){

    int n,k;
    cin>>n>>k;
    for(int i=0;i<k;i++){
        if(n%10!=0) n--;
        else n/=10;
    }
    cout<<n<<endl;

    return 0;
}
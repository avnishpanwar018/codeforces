#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(n) - each operation has 3 characters
// Space Complexity: O(1) - operation length is fixed

int main(){

    int n;
    cin>>n;
    int x=0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(char c:s){
            if(c=='+'){
                x++;
                break;
            }
            else if(c=='-'){
                x--;
                break;
            }
        }
    }
    cout<<x<<endl;

    return 0;
}
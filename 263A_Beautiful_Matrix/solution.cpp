#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(1)
// Space Complexity: O(1)

int main(){

    vector<vector<int>> mat(5,vector<int>(5));
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>mat[i][j];
        }
    }
    int r,c;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(mat[i][j]==1){
                r=i;
                c=j;
                break;
            }
        }
    }
    cout<<abs(r-2)+abs(c-2)<<'\n';

    return 0;
}
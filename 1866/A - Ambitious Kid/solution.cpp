#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    // int T;
    // cin>>T;
    // while(T--){
        int n;
        cin>>n;
 
        vector<int> arr(n);
 
        int minDiff= INT_MAX;
 
        for(int i=0; i<n; i++){
            cin>>arr[i];
            minDiff= min(minDiff, abs(arr[i]));
        }
 
        cout<<minDiff<<endl;
        
    // }
    return 0;
}
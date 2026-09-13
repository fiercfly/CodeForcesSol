#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
 
        int ans= 0;
 
        vector<int> arr(n-1);
        for(int i=0; i<n-1; i++){
            cin>>arr[i];
            ans-=arr[i];
        }
 
        cout<<ans<<endl;
        
    }
    return 0;
}
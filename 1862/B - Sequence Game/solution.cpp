#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
 
        vector<int> ans;
        int ind=0;
        ans.push_back(arr[ind++]);
 
        for(int i=1; i<n; i++){
            if(arr[i-1] <= arr[i]){
                ans.push_back(arr[i]);
            }
            else{
                ans.push_back(arr[i]);
                ans.push_back(arr[i]);
            }
        }
 
        cout<<ans.size()<<endl;
        for(int i=0; i<ans.size()-1; i++){
            cout<<ans[i]<<" ";
        }
        cout<<ans[ans.size()-1]<<endl;
    }
    return 0;
}
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
 
        map<int, int> mp;
        for(int i: arr){
            mp[i]++;
        }
 
        if(mp.size() >= 3){
            cout<<"NO"<<endl;
        }
        else if(mp.size() <= 1){
            cout<<"YES"<<endl;
        }
        else{
            int freq1= mp.begin()->second;
            int freq2=mp.rbegin()->second;
            if(abs(freq1 - freq2) > 1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
 
    return 0;
}
 
//can only work if 2 numbers with same or same-1 freq or all numbers are same
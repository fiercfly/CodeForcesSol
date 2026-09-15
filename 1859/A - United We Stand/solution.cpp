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
 
        vector<int> b;
        vector<int> c;
 
        sort(arr.begin(), arr.end());
        
        int maxi= arr[n-1];
 
        for(int i=0; i<n; i++){
            if(arr[i] == maxi){
                c.push_back(arr[i]);
            }
            else{
                b.push_back(arr[i]);
            }
        }
 
        if(b.size() == 0){
            cout<<-1<<endl;
        }
        else{
            cout<<b.size()<<" "<<c.size()<<endl;
            for(int i=0; i<b.size()-1; i++){
                cout<<b[i]<<" ";
            }
            cout<<b[b.size()-1]<<endl;
            for(int i=0; i<c.size()-1; i++){
                cout<<c[i]<<" ";
            }
            cout<<c[c.size()-1]<<endl;
            
        }
    }
    return 0;
}
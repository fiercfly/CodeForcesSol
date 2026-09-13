#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long val=0;
        for(long long i=0;i<n;i++){
            long long a;
            cin>>a;
            val=max(val,a+i); 
        }
        cout<<val<<endl;
    }
    return 0;
}
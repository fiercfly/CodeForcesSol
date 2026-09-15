#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
 
    while(T--){
        int n;
        cin>>n;
 
        vector<int> arr(n);
 
        int oddItems= 0;
        
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i] % 2 != 0){
                oddItems++;
            }
        }
 
        if(oddItems % 2 == 0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
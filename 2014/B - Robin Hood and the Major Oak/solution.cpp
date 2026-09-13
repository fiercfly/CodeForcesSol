#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        long long n;
        long long x;
        cin>>n>>x;
        
        long long ttl= 0;
        //ttl sum ho jyrgi
        if(n<= x){
            ttl= n*(n+1)/2;
        }
        else{
            ttl= (n-x)*x+ (x*(x+1))/2;
        }
        
        if(ttl%2 == 0){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
bool found(string x, string s){
    if(x.length() < s.length()){
        return false;
    }
 
    for(int i=0; i<x.length()-s.length()+1; i++){
        if(x.substr(i, s.length()) == s){
            return true;
        }
    }
    return false;
}
 
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x;
        cin>>s;
 
        int adds= 0;
        int ans= -1;
 
       for(int i=0; i<6; i++){
 
           if(found(x,s)){
               ans= adds;
               break;
           }
           x+=x;
           adds++;
       }
        cout<<ans<<endl;
        
    }
    return 0;
}
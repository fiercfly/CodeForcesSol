#include <bits/stdc++.h>
using namespace std;
 
int main(){
    
    int T;
    cin>>T;
    while(T--){
        
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        
        int maxStep= 0;
        
        int conSpace=0;
        
        for(char c: s){
            
            if(c == '.'){
                conSpace++;
            }
            else{
                maxStep+= conSpace;
                conSpace= 0;
            }
 
            if(conSpace >= 3){
                maxStep=2;
                conSpace=0;
                break;
            }
        }
 
        maxStep += conSpace;
        
        cout<<maxStep<<endl;
        
    }
    
    return 0;
}
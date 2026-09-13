#include <bits/stdc++.h>
using namespace std;
 
int main(){
    
    
    int T;
    cin>>T;
    
    while(T--){
        int n;
        cin>>n;
        
        //check if n is div by 3 or not -> if yes, SECOND, if no, FIRST
        
        // int sum=0;
        // while(n>0){
        //     sum+= n%10;
        //     n/=10;
        // }
        
        
        if(n%3 == 0){
            cout<<"Second"<<endl;
        }
        else{
            cout<<"First"<<endl;
        }
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int T;
    cin>>T;
 
    while(T--){
        int ana, katie, common;
        cin>>ana>>katie>>common;
 
        //exhaust commons
 
        if(common%2 == 0){ //next turn ana
            if(ana > katie){
                cout<<"First"<<endl;
            }
            else{
                cout<<"Second"<<endl;
            }
        }
 
        else{ // katie starts
            if(katie > ana){
                cout<<"Second"<<endl;
            }
            else{
                cout<<"First"<<endl;
            }
        }
    }
}
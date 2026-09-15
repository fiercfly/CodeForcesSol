#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int T;
    cin>>T;
 
    while(T--){
        int n,k,x;
        cin>>n>>k>>x;
 
        if(n%2 == 0){
            if(x == 1 && k == 1){
                cout<<"NO"<<endl;    
            }
            else if(x == 1 ){
               cout<<"YES"<<endl;
                cout<<n/2<<endl;
                for(int i=0; i<n/2; i++){
                    cout<<2<<" ";
                }
                cout<<endl;
            }
            else{
               cout<<"YES"<<endl;
                cout<<n<<endl;
                for(int i=0; i<n; i++){
                    cout<<1<<" ";
                }
                cout<<endl;
            }
        }
            
        else{
            if(x != 1){
                cout<<"YES"<<endl;
                cout<<n<<endl;
                for(int i=0; i<n; i++){
                    cout<<1<<" ";
                }
                cout<<endl;
            }
            else if(n >= 3 &&  k >= 3){
                cout<<"YES"<<endl;
                cout<<n/2<<endl;
                for(int i=0;  i<n/2-1; i++){
                    cout<<2<<" ";
                }
                cout<<3<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
    // even:
    //     x== 1: true, n/2 -> 2
    //     true, n -> 1
    // odd:
    //     x == 1: true, n-> 1
    //     n & k >=3: true, n/2-1->2, 3
    //     false
        
    
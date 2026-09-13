#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<char>s(n),s2(n);
        for(int i= 0;i< n;i++){
            cin>>s[i];
        }
        for(int i= 0;i< n;i++){
            cin>>s2[i];
        }
        bool psbl= true;
        for(int i= 0;i< n;i++){
            //first 0 if other also 0 then ok otherwise not posible
            if(s[i]== '0'){
                if(s2[i] == '1'){
                    psbl= false;
                    break;
                }
                
                else{
                    continue;
                }
                
            }
            //1 come so all 0 can become 1
            else{
                break;
            }
            
        }
        
        if(psbl){
            cout<<"YEs"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
 
 
// 100101010
// 101111110
// to make 0 as 1, we shold have 1 1 before
// if no 1 before first 0 then no l can be possibl
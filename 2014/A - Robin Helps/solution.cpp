// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    while(n--){
        int people;
        int k;
        cin>>people>>k;
        vector<int> ppl;
        for(int i=0; i<people; i++){
            int x;
            cin>>x;
            ppl.push_back(x);
        }
        
        int ans= 0;
        int gold= 0;
        
        for(int i=0; i<ppl.size(); i++){
            if(ppl[i]>=k){
                gold+= ppl[i];
            }
            if(ppl[i] == 0 && gold>0){
                // cout<<"one person"<<endl;
                gold--;
                ans++;
            }
            else{
                continue;
            }
        }
        
        cout<<ans<<endl;
    }
 
    return 0;
}
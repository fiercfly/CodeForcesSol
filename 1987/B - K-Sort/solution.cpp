#include <bits/stdc++.h>
using namespace std;
int main() {
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>vct(n);
        //input reding
        for(long long i=0;i<n;i++){
            cin>>vct[i];
        }
        vector<long long>dif;
        long long maxi=vct[0];
        
        for(long long i=0;i<n;i++){
            long long vl=vct[i];
            maxi=max(maxi,vl);
            if(maxi>vl){
                dif.push_back(maxi-vl);
            }
        }
        //if diff empty then 0
        if (dif.empty()) {
            cout<<0<<endl;
            continue;
        }
        sort(dif.begin(),dif.end());
        long long ttl=dif.back();
        long long pdif= 0;
 
        for(size_t i=0;i<dif.size();i++){
            ttl=ttl+ ((dif[i]-pdif)*(dif.size()-i));
            pdif=dif[i];
        }
        cout<<ttl<<endl;
    }
    return 0;
}
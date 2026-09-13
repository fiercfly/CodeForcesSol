#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--) {
        //inpts
        int r, c;
        cin>>r>>c;
 
        vector<vector<int>> a(r, vector<int>(c));
        vector<vector<int>> b(r, vector<int>(c));
        for(int i=0; i<r; ++i)
            for(int j=0; j<c; ++j) {
                char v;
                cin>>v;
                a[i][j]=v-'0';
            }
        for(int i=0; i<r; ++i)
             for(int j=0; j<c; ++j) {
                char v;
                cin>>v;
                b[i][j]=v-'0';
            }
          for(int i=r-1; i>=1; --i) {
            for(int j=c-1; j>=1; --j) {
                if(a[i][j]!=b[i][j]) {
                    int d=(b[i][j]-a[i][j]+3)%3;
                    a[i][j]=b[i][j];
                    a[i-1][j]=(a[i-1][j]+2*d)%3;
                    a[i][j-1]=(a[i][j-1]+2*d)%3;
                    a[i-1][j-1]=(a[i-1][j-1]+d)%3;
                }
            }
        }
    bool ans=true;
    //cndns
        for(int i=0; i<r; ++i) if(a[i][0]!=b[i][0]) ans=false;
        for(int j=0; j<c; ++j) if(a[0][j]!=b[0][j]) ans=false;
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 
    return 0;
}
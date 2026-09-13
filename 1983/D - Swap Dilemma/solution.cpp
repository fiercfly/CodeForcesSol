#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        //inpts
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;++i)cin>>a[i];
        vector<int>b(n);
        for(int i=0;i<n;++i)cin>>b[i];
        //srt
        vector<int>sa=a;
        sort(sa.begin(),sa.end());
        vector<int>sb=b;
        sort(sb.begin(),sb.end());
        
        if(sa!=sb){
            cout<<"NO
";
        }
        else{
            unordered_map<int,int>m;
            for(int i=0;i<b.size();++i)m[b[i]]=i;
            int cst=0;
            for(int i=0;i<a.size();++i){
                if(a[i]!=b[i]){
                    cst++;
                    int x=m[a[i]];
                    swap(b[i],b[x]);
                    m[b[x]]=x;
                    m[a[i]]=i;
                }
            }
            if(cst%2==0)cout<<"YES
";
            else cout<<"NO
";
        }
    }
    return 0;
}
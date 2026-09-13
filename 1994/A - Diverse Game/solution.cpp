#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,m;
        cin>>n>>m;
        vector<vector<int>>a(n, vector<int>(m));
        vector<vector<int>> b(n, vector<int>(m));
        
        for(int i=0; i<n;i++){
            for(int j=0; j<m; j++){
                cin>> a[i][j];
                b[i][j]= a[i][j];
            }
        }
 
        for(int i=0;i<n;i++) {
            rotate(b[i].rbegin(), b[i].rbegin()+1, b[i].rend());
        }
        
        // cout<<vct[0][0];
        
        vector<int> temp= b[n-1];
        for(int i=n-1; i>0;i--) {
            b[i]= b[i-1];
        }
        b[0]=temp;
        //sam test
        bool same=true;
        for(int i=0; i<n&& same;i++){
            for(int j=0; j<m &&same;j++){
                if(a[i][j] !=b[i][j]){
                    same= false;
                }
            }
        }
 
        if(same){
            cout<<"-1"<<endl;
        }
        else{
            for(int i=0;i<n;i++) {
                for(int j=0;j<m;j++){
                    cout<<b[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
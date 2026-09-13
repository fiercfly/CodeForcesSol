#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int maxi= INT_MIN;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if(i<n-1){
                maxi=  max(a[i], maxi);
            }
        }
        long long maxPages = a[n - 1]; 
        maxPages += maxi;
        cout<<maxPages<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int T;
    cin>>T;
 
    while(T--){
        int n;
        cin>>n;
 
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
 
        //case when size=1
        if(arr.size() == 1){
            cout<<0<<endl;
            continue;
        }
 
        int minDiff=INT_MAX;
        int ind= 0;
        bool isSorted=true;
 
        for(int i=0; i<n-1; i++){
            //sort check
            if(isSorted && (arr[i] > arr[i+1])){
                isSorted= false;
            }
 
            //diff check
            int diff= abs(arr[i] - arr[i+1]);
            if(diff < minDiff){
                minDiff= diff;
                ind = i;
            }
        }
 
        if(!isSorted){
            cout<<0<<endl;
        }
        else{
            cout<<(minDiff/2)+1<<endl;
        }
    }
    return 0;
}
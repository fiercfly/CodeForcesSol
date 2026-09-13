#include <bits/stdc++.h>
using namespace std;
 
int main(){
    
    int T;
    cin>>T;
    while(T--){
     int n,k;
     cin>>n>>k;
     
     vector<int> arr(n);
     
     for(int i=0; i<n; i++){
         cin>>arr[i];
     }
     
     //if k length morre than 1, all good
     
     if(k>1){
         cout<<"YES"<<endl;
         continue;
     }
     //when k is 1
     else{
         if(n<=1){
             cout<<"YES"<<endl;
             continue;
         }
         else{
             //check if array if sorted or not
             bool sorted= 1;
             for(int i=1; i<n; i++){
                 if(arr[i-1] > arr[i]){
                     sorted= 0;
                     cout<<"NO"<<endl;
                     break;
                 }
             }
             if(sorted)cout<<"YES"<<endl;
             continue;
         }
     }
    }
    return 0;
}
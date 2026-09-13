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
 
        bool sorted= true;
 
        // while(true){
        //     bool found= false;
        //     for(int i=1; i<n-1; i++){
        //         if(arr[i-1] < arr[i] && arr[i] > arr[i+1]){
        //             found= true;
        //             int temp= arr[i];
        //             arr[i]= arr[i+1];
        //             arr[i+1]= temp;
        //         }
        //     }
        //     if(!found){
        //         //check if its sorted or not
        //         for(int i=1; i<n; i++){
        //             if(arr[i] <= arr[i-1]){
        //                 sorted= false;
        //             }
        //         }
        //         break;
        //     }
        // }
 
        if(arr[0] != 1){
            sorted= false;
        }
 
        
        if(sorted){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        // cout<<sorted==true?"YES":"NO"<<endl;
    }
 
    return 0;
}
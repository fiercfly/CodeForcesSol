#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int T;
    cin>>T;
    while(T--){
        int n,x;
        cin>>n>>x;
        
        vector<int> stations(n);
        
        for(int i=0; i<n; i++){
            cin>>stations[i];
        }
        
        
        int maxFuel= -1;
        int prevS=0;
        
        for(int i=0; i<n; i++){
            int curS= stations[i];
            
            if(curS > x){ //already reached station
                break;
            }
 
            int dis= (curS - prevS);
            maxFuel = max(maxFuel, dis) ;
            prevS= curS;
        }
        
        //after the last station, reach des and return back
        int retDis= 2*(x-prevS);
        maxFuel = max(maxFuel , retDis);
        
        cout<<maxFuel<<endl;
    }
    
    
    return 0;
}
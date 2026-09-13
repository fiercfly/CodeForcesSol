#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    int T;
    cin>>T;
    while(T--){
        vector<string> board(10);
        for(int i=0; i<10; i++){
            cin>>board[i];
        }
 
        int n= 10;
 
        int score= 0;
 
        //4 direction traversal
        
        int topLR= 0;
        int topLC= 0;
        int topRR= 0;
        int topRC= n-1;
        int btmLR= n-1;
        int btmLC= 0;
        int btmRR= n-1;
        int btmRC= n-1;
        int value= 1;
 
 
        while(topLR <= btmLR){
 
            //top left to top right
            for(int i=topLC; i<=topRC; i++){
                if(board[topLR][i] == 'X'){
                    score+= value;
                }
            }
            //top right to bottom right
            for(int i=topRR+1; i<=btmRR; i++){
                if(board[i][topRC] == 'X'){
                    score += value;
                }
            }
    
            //bottom right to bottom left
            for(int i=btmRC-1; i>=btmLC; i--){
                if(board[btmRR][i] == 'X'){
                    score += value;
                }
            }
    
            //bottom left to top left
            for(int i= btmLR-1; i>topLR; i--){
                if(board[i][btmLC] == 'X'){
                    score += value;
                }
            }
    
            topLR++;
            topLC++;
            topRR++;
            topRC--;
            btmRR--;
            btmRC--;
            btmLR--;
            btmLC++;
            value++;
        }
        cout<<score<<endl;
        
    }
    return 0;
}
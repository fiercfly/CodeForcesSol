#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, pr, sp;
        cin >> n >> pr >> sp;
        long long profit = 0;
        long long diff = sp - pr;
 
        if (diff <= 0) {
            
            profit += n * pr;
        } else {
            
            if (n <= diff) {
               
                profit += ((sp + 1) * sp) / 2 - ((sp - n + 1) * (sp - n)) / 2;
            } else {
                
                profit += ((sp + 1) * sp) / 2 - ((pr + 1) * pr) / 2;
                profit += pr * (n - diff);
            }
        }
        cout << profit << endl;
    }
    return 0;
}
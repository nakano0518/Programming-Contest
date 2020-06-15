// ACしなかった(以下修正してACさせる、未修生)

include <bits/stdc++.h>
using namespace std;
 
int main() {
    int x, n;
    cin >> x >> n;
    if(n == 0){
        cout << x << endl;  
    }else {
        vector<int> p(n);
        for(int i = 0; i < n; i++) {
            cin >> p.at(i);
        }
         vector<int> num(201);
        for(int i = 0; i <= 200; i++) {
            num.at(i) = i-100;
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j <= 200; j++) {
                if(p.at(i) == num.at(j)) {
                    num.at(j) = 1000;
                }
            }
        }
        /*for(int i = 0; i <= 200; i++) {
            cout << num.at(i) << endl;    
        }*/
        int ans = max(x-num.at(0), num.at(0)-x);
        for(int i = 1; i <= 200; i++) {
              ans = min(ans, max(x-num.at(i), num.at(i)-x));
        }
        for(int i = 0; i <= 200; i++) {
              if((x-ans) == num.at(i)) {
                 cout << x-ans << endl;
                 break;
              }else if((x+ans) == num.at(i)) {
                 cout << x+ans << endl;
                 break;
              }
        }
        
    }
}
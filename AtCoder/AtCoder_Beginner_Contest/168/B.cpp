#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int K;
    string S;
    cin >> K >> S;
    if(S.size() <= K) {
        cout << S << endl;;    
    }else {
        string ans;
        for(int i = 0; i < K; i++) {
            ans += S.at(i);
        }
        cout << ans << "..." << endl;
    }
}

// S.size() > K の場合、S = S.substr(0, K) + "..." とすると短く書けるので、
// ★ S.substr(0,K) を覚えておく。
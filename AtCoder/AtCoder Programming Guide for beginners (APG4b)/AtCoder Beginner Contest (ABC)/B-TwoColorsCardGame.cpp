#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    vector<string>s(N);
    for(int i = 0; i < N; i++) {
        cin >> s.at(i);
    }
    
    int M;
    cin >> M;
    vector<string>t(M);
    for(int i = 0; i < M; i++) {
        cin >> t.at(i);
    }
    
    
    int ans = 0;
    int cnt = 0;
    for(int i = 0; i < N; i++) {
        cnt = 0;
        for(int j = 0; j < N; j++) {
            if(s.at(i) == s.at(j)) {
                cnt++;
            }    
        }
        for(int k = 0; k < M; k++) {
            if(s.at(i) == t.at(k)) {
                cnt--;
            }
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;
}
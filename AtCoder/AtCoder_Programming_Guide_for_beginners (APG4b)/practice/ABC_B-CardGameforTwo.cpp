#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i=0; i<N; i++) {
        cin >> a.at(i);
    }
    sort(a.begin(), a.end());
    
    int ans = 0;
    for(int i = N-1; i >= 0; i--) {
        if(i%2 == (N-1)%2) {
        	ans += a.at(i);
        }else if(i%2 == (N-2)%2) {
        	ans -= a.at(i);
        }
    }
    cout << ans << endl;
}
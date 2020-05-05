#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N, K;
    cin >> N >> K;
    int sum = 0;
    for(int i=0; i<N; i++) {
        int x;
        cin >> x;
        if(x <= K/2) {
            sum += x*2;
        }else {
            sum += max(x-K, K-x)*2;
        }
    }
    cout << sum << endl;
}
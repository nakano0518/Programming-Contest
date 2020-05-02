#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    vector<int> d(N);
    for(int i=0; i<N; i++) {
        cin >> d.at(i);
    }
    sort(d.begin(), d.end());
    
    int cnt = 0;
    for(int i = 0; i < N; i++) {
        if(i == 0) {
            cnt++;
        }
        if(i > 0) {
            if(d.at(i) != d.at(i-1)) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}
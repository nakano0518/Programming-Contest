#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    vector<int>a(N+1, 0);
    for(int i = 1; i < N+1; i++) {
        cin >> a.at(i);
    }
    
    int tmp = 1;
    
    int j = 0;
    for(; j < N; j++){
        tmp = a.at(tmp);
        if(tmp == 2) {
            cout << j+1 << endl;
            break;
        }
    }
    if(j == N) {
        cout << -1 << endl;
    }
}
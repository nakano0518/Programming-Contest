#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N, M;
    cin >> N >> M;
    vector<int>a(M*2);
    for(int i = 0; i < M*2; i++) {
        cin >> a.at(i);
    }
    
    for(int i = 1; i <= N; i++) {
        int count = 0;
        for(int j = 0; j < M*2; j++) {
            if(a.at(i) == i) {
                count++;
            }
        }
        cout << count << endl;
    }
    
}
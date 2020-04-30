#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    for(int i = 0; i < H; i++) {
        vector<char> A(W);
        for(int j = 0; j < W; j++) {
            cin >> A.at(j); 
        }
        S.at(i) = A;
    }
}
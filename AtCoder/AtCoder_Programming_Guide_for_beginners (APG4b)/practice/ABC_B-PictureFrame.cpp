#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int H, W;
    cin >> H >> W;
    for(int i=0; i<W+2; i++) {
        cout << "#";
        if(i == W+1) {
            cout << endl;
        }
    }
    
    vector<string> S(H);
    for(int i=0; i<H; i++) {
        cin >> S.at(i);
    }
    for(int i=0; i<H; i++) {
        cout << "#" << S.at(i) << "#" << endl;
    }
    
    for(int i=0; i<W+2; i++) {
        cout << "#";
        if(i == W+1) {
            cout << endl;
        }
    }
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int H, W;
    cin >> H >> W;
  
    vector <vector<char> >data(H, vector<char>(W));
  
    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            cin >> data.at(i).at(j);
        }
    }
  
    for(int i = 0; i < H; i++) {
        int cnt = 0; 
        for(int j = 0; j < W; j++) {
             if(data.at(i).at(j) == '.') {
                cnt++;
            }
        }
        if(cnt == W) {
            for(int j = 0; j < W; j++) {
                data.at(i).at(j) = '*';
            }
        }
    }
    
    for(int j = 0; j < W; j++) {
        if(data.at(0).at(j) != '#') {
            int cnt = 0;
            for(int k = 0; k < H; k++) {
                if(data.at(k).at(j) != '#') {
                    cnt++;
                }
            }
            if(cnt == H) {
                for(int k = 0; k < H; k++) {
                    data.at(k).at(j) = '*';
                }   
            }
        }     
    }
    
    for(int i = 0; i < H; i++) {
        int cnt = 0;
        for(int j = 0; j < W; j++) {
            if(data.at(i).at(j) != '*') {
                cout << data.at(i).at(j);
            }else {
                cnt++;
            }
        }
        if(cnt != W) {
            cout << endl;
        }
    }
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, M;
  cin >> N >> M;
  vector <int> H(N);
  for(int i = 0; i < N; i++) {
      cin >> H.at(i);
  }
  
//   int d;
//   vector<vector<int>> data(M);
//   for(int i = 0; i < M; i++) {
//     for(int j = 0; j < 2; i++) {
//         cin >> d;
//         data.at(i).push_back(d);    
//     }
//   }
  
  vector<int> tmp(N);
  
  int cnt = 0;
  for(int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        bool flag = false;
        if(H.at(a-1) > H.at(b-1)) {
            flag = false;
            for(int k = 0; k < tmp.size(); k++) {
                if(tmp.at(k) == a) {
                    flag = true;
                }
            }
            if(flag) {
                    //何もしない
                }else {
                    cnt++;
                    tmp.push_back(a);
                }
        }else if (H.at(a-1) < H.at(b-1)) {
            flag = false;
            for(int k = 0; k < tmp.size(); k++) {
                if(tmp.at(k) == b) {
                    flag = true;
                }
                
            }
            if(flag) {
                    //何もしない
                }else {
                    cnt++;
                    tmp.push_back(b);
                }
        }
    }
    cout << cnt << endl;
  }
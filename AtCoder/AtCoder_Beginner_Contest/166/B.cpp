#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, K;
  cin >> N >> K;
  vector <int> S(N);
  for(int i = 0; i < N; i++) {
      S.at(i) = i+1;
  }
  
  int d;
  int a;
  vector<vector<int>> A(K);
  for(int i = 0; i < K; i++) {
      cin >> d;
      for(int j = 0; j < d; j++) {
          cin >> a;
          A.at(i).push_back(a);
      }
  }
  
  for(int i = 0; i < K; i++) {
      for(int j = 0; j < A.at(i).size(); j++) {
          for(int k = 0; k < N; k++) {
              if(S.at(k) == A.at(i).at(j)) {
                  S.at(k) = 0;
              }
          }
      }
  }
  
  int cnt = 0;
  for(int i = 0; i < N; i++) {
      if(S.at(i) != 0) {
          cnt++;
      }
  }
  cout << cnt <<endl;
}
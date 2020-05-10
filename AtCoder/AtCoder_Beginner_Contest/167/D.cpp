#include <bits/stdc++.h>
using namespace std;
 
void loop(long long &K, vector<int> &A, int &i) {
    while(K > 0) {
        i = A.at(i)-1;
        K--;
    }
}

int main() {
    int N;
    long long K;
    cin >> N >> K;

    vector<int> A(N);
    for(int j = 0; j < N; j++) {
            cin >> A.at(j);
    }
    
    int i = 0;
    loop(K, A, i);
    cout << i+1 << endl; 
}


/* 周期を見つける方法
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
 
int main() {
  int n; ll k;
  cin >> n >> k;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
 
  vector<int> s;
  vector<int> ord(n+1,-1);
  int c = 1, l = 0;
  {
    int v = 1;
    while (ord[v] == -1) {
      ord[v] = s.size();
      s.push_back(v);
      v = a[v-1];
    }
    c = s.size() - ord[v];
    l = ord[v];
  }
 
  if (k < l) cout << s[k] << endl;
  else {
    k -= l;
    k %= c;
    cout << s[l+k] << endl;
  }
  return 0;
}
*/

/*ダブリング法
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
 
const int D = 60;
const int MAX_N = 200005;
int to[D][MAX_N];
 
int main() {
  int n; ll k;
  cin >> n >> k;
  rep(i,n) {
    cin >> to[0][i];
    to[0][i]--;
  }
  rep(i,D-1)rep(j,n) {
    to[i+1][j] = to[i][to[i][j]];
  }
 
  int v = 0;
  for (int i = D-1; i >= 0; --i) {
    ll l = 1ll<<i;
    if (l <= k) {
      v = to[i][v];
      k -= l;
    }
  }
  cout << v+1 << endl;
  return 0;
}
*/
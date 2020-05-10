#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string S, T;
    cin >> S >> T;
    
    bool check = true;
    for(long i = 0; i < S.size(); i++) {
        if(S.at(i) != T.at(i)) {
            check = false;
            break;
        }
    }
    if(check && (S.size()+1 == T.size())) {
        cout << "Yes" << endl;    
    }else {
        cout << "No" << endl;
    }
    
}

//★文字列.pop_back()で末尾文字削除

/*#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
 
int main() {
  string s, t;
  cin >> s >> t;
  t.pop_back();
  if (s == t) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}*/



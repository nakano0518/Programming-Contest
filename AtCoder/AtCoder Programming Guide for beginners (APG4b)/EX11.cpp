#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, A;
  cin >> N >> A;
  int sum = A;
 
  for (int i = 0; i < N; i++) {
    string s;
    int x;
    cin >> s >> x;
    
    if(s == "+") {
        sum += x;    
    }else if(s == "-") {
        sum -= x;
    }else if(s == "*") {
        sum *= x;
    }else if(s == "/" && x != 0) {
        sum /= x;
    }else{
        cout << "error" << endl;
        break;
    }
    
    cout << i + 1 << ":" << sum << endl;
  }
}
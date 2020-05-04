#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int p;
  cin >> p;

  string text; 
  if (p == 2) {
    cin >> text;
    cout << text << "!" << endl;
  }
  
  int price, N;
  cin >> price >> N;
  
  cout << price * N << endl;
}
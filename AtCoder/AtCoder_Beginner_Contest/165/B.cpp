#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long X;
  cin >> X;
  
  long sum = 100;
  long cnt = 0;
  while(sum < X) {
        sum = sum*1.01;
        cnt++;
  }
  cout << cnt << endl;
}
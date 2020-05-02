#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  vector <int> A(N);
  
  for(int i = 0; i < N; i++) {
      cin >> A.at(i);
  }
  
  int sum = 0;
  
  for(int i = 0; i < N; i++) {
      sum += A.at(i);
  }
  
  int average = sum/N;
  
  for(int i = 0; i < N; i++) {
      cout << max(average-A.at(i), A.at(i)-average) << endl; 
  }
}

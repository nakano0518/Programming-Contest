/*問題文
2つの正整数 a,b が与えられます。 
a,b の平均値をx とします。 
x の小数点以下を切り上げて得られる整数を出力してください。

制約
a, b は整数である。
1≤a,b≤100

入力
入力は以下の形式で標準入力から与えられる。
a
b

出力
x の小数点以下を切り上げて得られる整数を出力せよ。
*/


#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int a, b;
  cin >> a >> b;
  cout << (a+b+1)/2 << endl;
}

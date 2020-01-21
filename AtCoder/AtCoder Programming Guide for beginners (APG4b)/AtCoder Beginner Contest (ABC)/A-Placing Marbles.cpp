/*問題文
すぬけ君は 1,2,3 の番号がついた 3 つのマスからなるマス目を持っています。 
各マスには 0 か 1 が書かれており、マス i にはsi が書かれています。
すぬけ君は 1 が書かれたマスにビー玉を置きます。 ビー玉が置かれるマスがいくつあるか求めてください。

制約
s1,s2,s3 は 1 あるいは 0

入力
入力は以下の形式で標準入力から与えられる。
s1
s2
s3

出力
答えを出力せよ。*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string s;
  cin >> s;
  int counter;
  if(s[0] == '1') counter++;
  if(s[1] == '1') counter++;
  if(s[2] == '1') counter++;
  cout << counter << endl;
}
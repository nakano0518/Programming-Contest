/*問題文
1行の計算式が与えられるので、その結果を出力してください。

与えられる計算式のパターンと対応する出力は以下の表の通りです。

入力	   出力	                   備考
A+B        A+Bの計算結果を出力	
A-B        A−Bの計算結果を出力	
A*B        A×Bの計算結果を出力	
A/B        A÷Bの計算結果を出力	  小数点以下は切り捨てて出力,Bが0の場合はerrorと出力
A?B        errorと出力	
A=B        errorと出力	
A!B        errorと出力	*/


#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A, B;
  string op;
  cin >> A >> op >> B;
 
  if (op == "+") {
    cout << A + B << endl;
  }else if (op == "-") {
  	cout << A-B << endl;
  }else if (op == "*") {
  	cout << A*B << endl;
  }else if(op == "/" && B != 0) {
  	cout << A/B << endl;
  }else{
  	cout << "error" << endl;
  }  
}
/* -------------------------------------------------------------------------------------
問題文
A君は次の出力をするプログラムを作ろうとしました。

実行結果

いつも2525
AtCoderくん


しかし、書いたプログラムを実行してみるとエラーが発生しました。
A君が書いたプログラムのエラーを修正し、正しく動作するようにしてください。

A君が書いたプログラム
#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << "いつも << 252 << endl;
  cout << "AtCoderくん"　<< endl
}

このコードをコードテストで実行すると、標準エラー出力に以下のエラーメッセージが表示されます。

標準エラー出力
./Main.cpp:5:11: warning: missing terminating " character
   cout << "いつも << 252 << endl;
           ^
./Main.cpp:5:3: error: missing terminating " character
   cout << "いつも << 252 << endl;
   ^
./Main.cpp:6:3: error: stray ‘\343’ in program
   cout << "AtCoderくん"　<< endl
   ^
./Main.cpp:6:3: error: stray ‘\200’ in program
./Main.cpp:6:3: error: stray ‘\200’ in program
./Main.cpp: In function ‘int main()’:
./Main.cpp:5:8: error: no match for ‘operator<<’ (operand types are ‘std::ostream {aka std::basic_ostream<char>}’ and ‘std::ostream {aka std::basic_ostream<char>}’)
   cout << "いつも << 252 << endl;
        ^
./Main.cpp:5:8: note: candidate: operator<<(int, int) <built-in>
./Main.cpp:5:8: note:   no known conversion for argument 2 from ‘std::ostream {aka std::basic_ostream<char>}’ to ‘int’
In file included from /usr/include/c++/5/istream:39:0,
                 from /usr/include/c++/5/sstream:38,
                 from /usr/include/c++/5/complex:45,
                 from /usr/include/c++/5/ccomplex:38,
    ...
---------------------------------------------------------------------------------------------------------------------------------------------*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  cout << "いつも" << 2525 << endl;
  cout << "AtCoderくん" << endl;
}
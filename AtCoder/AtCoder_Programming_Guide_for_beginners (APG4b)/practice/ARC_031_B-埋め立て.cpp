#include <bits/stdc++.h>
using namespace std;
 
//(x,y)から到達できるすべての陸地マスのcheckedをtrueにする
void fill_island(vector<vector<char>> &board, vector<vector<bool>> &checked, int y, int x) {
  //終了条件
  if (y < 0 || x < 0 || y >= 10 || x >= 10) return;
  if (board.at(y).at(x) == 'x') return;
  if (checked.at(y).at(x)) return;
  
  //既に調べているという状態に変えておく
  checked.at(y).at(x) = true;
  
  //上下左右を調べる
  fill_island(board, checked, y - 1, x    );  // 上
  fill_island(board, checked, y    , x + 1);  // 右
  fill_island(board, checked, y + 1, x    );  // 下
  fill_island(board, checked, y    , x - 1);  // 左
}


//すべての陸地マスが繋がっているか調べる関数が必要
//すべての陸地マスが繋がっている⇒ある1つの陸地マスから上下左右に移動することを繰り返し、すべての陸地マスに到達できる 
bool check_connected(vector<vector<char>> &board) {
  vector<vector<bool>> checked(10, vector<bool>(10, false));
 
  // 陸地マスを1つ探す
  int y, x;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (board.at(i).at(j) == 'o') {
        y = i;
        x = j;
        break;
      }
    }
  }
  //探したマス(x,y)から到達できるすべての陸地マスのcheckedをtrueにする
  fill_island(board, checked, y, x); 
  //'o'なのにcheckedがtrueになってない島がある。2つの独立した島が存在する
  bool ok = true;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (board.at(i).at(j) == 'o') {
        if (!checked.at(i).at(j)) {
          // 到達できていない陸地マスがある
          ok = false;
        }
      }
    }
  }
 
  // ok == true なら全ての陸地マスは繋がっている
  return ok;
}
 
int main() {
  //標準入力
  vector<vector<char>> board(10, vector<char>(10));
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      cin >> board.at(i).at(j);
    }
  }
  //「1か所埋め立て、元に戻す」をマス1か所ずつ繰り返す。
  for (int y = 0; y < 10; y++) {
    for (int x = 0; x < 10; x++) {
      
      if (board.at(y).at(x) == 'o') continue; //もともと'o'であればとばす
      
      board.at(y).at(x) = 'o';  // 埋め立てたと仮定する
 
      if (check_connected(board)) {
        cout << "YES" << endl;
        return 0; //int main(){}部分を終了する
      }
 
      board.at(y).at(x) = 'x';  // 戻す
    }
  }
 
  cout << "NO" << endl;
}

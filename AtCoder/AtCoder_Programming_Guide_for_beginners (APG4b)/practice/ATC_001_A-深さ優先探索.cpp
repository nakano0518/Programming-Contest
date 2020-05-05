#include <bits/stdc++.h>
using namespace std;
 
void search(int x,int y,vector<vector<char>> &board,vector<vector<bool>> &checked){
  //終了条件
  if(x < 0 || y < 0 || x >= board.at(0).size() || y >= board.size()) return;
  if(board.at(y).at(x)=='#') return;
  if(checked.at(y).at(x)) return;
  
  //既に調べた状態に変えておく
  checked.at(y).at(x)=true;
  //上下左右を調べる
  search(x+1,y,board,checked);
  search(x-1,y,board,checked);
  search(x,y+1,board,checked);
  search(x,y-1,board,checked);
}
 
 
int main()
{
  //標準入力および必要な配列等の定義
  int H, W;
  cin >> H >> W ;
 
  vector<vector<char>>board(H,vector<char>(W));
  vector<vector<bool>>checked(H,vector<bool>(W, false));
 
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      cin >> board.at(i).at(j);
    }
  }
 
  //スタート地点の座標を求める
  int sh , sw ;
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
        if(board.at(i).at(j)=='s'){
          sh=i;
          sw=j;
          //cout << sh << sw << endl;
        }
    }
  }
 
  //ゴール地点の座標を求める
  int gh , gw ;
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
        if(board.at(i).at(j)=='g'){
          gh=i;
          gw=j;
          //cout << gh << gw << endl;
        }
    }
  }

  //再帰関数によるDFS(深さ優先探索)の実行
  search(sw,sh,board,checked);
 
  /*for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      cout << checked.at(i).at(j);
    }
    cout << endl;
 
  }*/
 
  //出力
  if(checked.at(gh).at(gw)){
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;
 
}
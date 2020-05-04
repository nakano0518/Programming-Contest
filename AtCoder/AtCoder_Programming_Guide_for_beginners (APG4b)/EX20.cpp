#include <bits/stdc++.h>
using namespace std;

//x番目の組織が親組織に提出する枚数を返す
//childrenは組織の関係を表す2次元配列(参照渡し)
int count_report_num(vector<vector<int> > &children, int x) {
    //ベースケース
    if(children.at(x).size() == 0) {
        //子組織から報告書を受け取ることはないので作成した1枚のみが確定(終了条件)
        return 1;
    }
    
    //再帰ステップ
    int sum = 0;
    for (int c : children.at(x)) {
        sum += count_report_num(children, c);
    }
    sum += 1;
    return sum;
}

int main() {
    int N;
    cin >> N;
    
    //標準入力する
    vector<int> p(N);
    p.at(0) = -1; //0番組織の親組織は存在しないので-1を入れておく
    for(int i = 1; i < N; i++) {
        cin >> p.at(i);
    }
    //ある親組織が持つ子の書類の数を集計するので
    //親の番号(インデックス番号)とその子の組織の番号(配列の要素)として
    //2次元配列を定義し紐づける。
    vector<vector<int> > children(N);
    for(int i = 1; i < N; i++) {
        int parent = p.at(i);
        children.at(parent).push_back(i);
    }
    
    //各組織について、答えを出力
    for(int i= 0; i < N; i++) {
        cout << count_report_num(children, i) << endl;   
    }
}
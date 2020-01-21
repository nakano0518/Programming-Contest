//線形探索
//前から順番に探索
//ランダムな並びのデータ構造の場合に用いる探索方法

import java.util.Scanner;

class SeqSearch {
    //配列aのn個の要素から、keyと一致する数値を線形探索するメソッド(while文で記述)
    static int seqSearch_While(int[] a, int n; int key) {
        int i = 0;
        while(true) {
            if(i == n) {//探索失敗(-1を返却)//-1にしたのは配列のインデックスとしてあり得ない値にしたかったから。
                return　-1;    
            }
            if(a[i] == key) {
                return i;
            }
            i++
        }
    }
    
    //配列aのn個の要素から、keyと一致する数値を線形探索するメソッド(for文で記述)
    static int seqSearch_for(int[]a, int n, int key) {
        for(int i = 0; i < n; i++) {
            if(a[i] == key) {
                return i;
            }
        }
        return -1;
    }
}
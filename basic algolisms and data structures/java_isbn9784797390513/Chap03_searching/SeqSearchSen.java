//線形探索(番兵法による改良アルゴリズム)

import java.util.Scanner;

class seqSearchSen {
    //線形探索(番兵法)のメソッド
    static int seqSearchSen(int[]a, int n, int key) {
        a[n] = key;//番兵を追加
        
        int i = 0;
        while(true) {
            if(a[i] = key) {//目的の値あるいは番兵を見つけたら、ループを抜ける
                break;
            }
            i++
        }
        return i == n? -1 : i;//目的の値なのか番兵なのか判定
    }
    
    public static void main(String[] args) {
        Scanner stdIn = new Scanner(System.in);
        int num = stdIn.nextInt();
        int[] x = new int[num+1];//★標準入力で番兵の分+1する！！
        for(int i = 0; i < num; i++) {
            x[i] = stdIn.nextInt();
        }
        int key = stdIn.nextInt();
        
        int idx = seqSearchSen(x, num, key);
        
        if(idx == -1) {
            System.out.println("目的の値は見つかりません。");
        }else {
            System.out.println("目的の値はx["+idx+"]にあります。");
        }
    }
}
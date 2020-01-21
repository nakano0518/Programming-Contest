//配列の最大値を求め返却するメソッドを作成
//出力は適当に

import java.util.Scanner;

class MaxOfArray {
    //配列の最大値を求めて返却するメソッド
    static int maxOf(int[] a) {
        int max = a[0];
        for(int i = 0; i < a.length; i++) {//(参考)文字列の長さは、(char.)length()メソッドなので注意！！
            if(a[i] > max) {
                max = a[i];
            }
        }
        return max;
    }
    
    //適当に出力
    public static void main(String[] args) {
    /*ここから★配列の場合の標準入力*/
        Scanner stdIn = new Scanner(System.in);
        //要素数は？
        int num = stdIn.nextInt();
        //配列を初期化
        int[] array = new int[num];
        //要素を読み込む
        for(int i = 0; i < num.length; i++) {
            array[i] =　stdIn.nextInt(); 
        }
    /*ここまで★配列の場合の標準入力*/
    
    //最大値を出力
    System.out.println(maxOf(array));
    }
}
//※要実行

//標準入力した10進整数をn(2~36)進数へと基数変換するためのメソッド
//⇒ 10進整数をn進数で割った余りを求め、商に対して割り算を商が0になるまで繰り返す。
//出現した余りを逆順に並べたものが変換後の値になる。

import java.util.Scanner;

class CardConvRev {
    
    //配列の要素を逆順にするメソッドの読み込み
    static void swap(char[] a, int idx1, int idx2) {
        int tmp = a[idx1];
        a[idx1] = a[idx2];
        a[idx2] = tmp;
    }
    static void reverse(char[] a) {
        for(int i = 0; i < a.length/2; i++){
            swap(int[] a, i, a.length-1-i);
        }
    }
    
    //10進整数をn(2~36)進数へと基数変換するためのメソッド
    //x:10進整数、n進数、配列dに出現順に余りを格納
    static char[] cardConvR(int x, int n, char[]d) {
        //配列dのインデックス番号
        int digits = 0;
        //10進数の余りをn進数の数値に変換する規則
        String dchar = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        //商が0になるまで割り算を繰り返し、余りを格納していく
        do {
            d[digits++] = dchar.charAt(x % n);//余りを格納。後置インクリメントなのでインデックス番号0の要素入れた後にインクリメント。
            x /= n;
        }while(x != 0);
        reverse(d);
        return d;    
    }
    
    //出力
    public static void main(String[] args) {
        Scanner stdIn = new Scanner(System.in);
        int x;//10進整数
        int n;//n進数
        //int digits;//n進数に変換後の桁数
        char[] d = new char[32];//空のchar型の配列を用意
        
        
        //★標準入力、条件付き
        do{
            x = stdIn.nextInt();
        }while(x < 0)//非負という条件
        
        do{
            n = stdIn.nextInt();
        }while(n < 2 || n > 36)//この条件だったらもう一度という意味
        
        //
        char[] ansArray = cardConvR(x, n, d)
        //出力
        for(int i = 0; i < ansArray.length; i++) {
            System.out.print(ansArray[i]);
        }
    } 
}
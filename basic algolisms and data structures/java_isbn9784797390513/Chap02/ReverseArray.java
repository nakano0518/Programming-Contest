//配列の要素の並びを反転させる
//⇒ 外側の要素同士を交換する、交換には2値の交換メソッドを作成する。
//出力は適当に

import java.uitl.Scanner;

class ReverseArray {
    //2値の交換メソッドを作成
    static void swap(int[] a, int idx1, int idx2) {
        int tmp = a[idx1];
        a[idx1] = a[idx2];
        a[idx2] = tmp;
    }
    
    //要素の並びを反転するメソッドを作成
    static void reverse(int[] a) {
        for(int i = 0; i < a.length/2; i++){
            swap(int[] a, i, a.length-1-i);
        }
    }
    
    //適当に出力
    public static void main(String[] args) {
        //★配列の標準入力
        Scanner stdIn = new Scanner(System.in);
        int num = stdIn.nextInt();
        int[] array = new int[num];
        for(int i = 0; i < num; i++) {
            array[i] = stdIn.nextInt();
        }
        
        //出力(反転させて、出力)
        reverse(array);
        for(int i = 0; i < num; i++) {
            System.out.println("x["+i+"]="+array[i]);
        }
    }
}
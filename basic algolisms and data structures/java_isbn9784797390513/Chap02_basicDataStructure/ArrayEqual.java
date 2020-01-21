//2つのint型の配列が完全に等しいか?を判定するメソッド
//⇒ 要素数が等しい、かつ、同じインデックス番号の値が等しい

import java.util.Scanner;

class ArrayEqual {
    //2つのint型の配列が完全に等しいか?を判定するメソッド
    static boolean equals(int[] a, int[] b) {
        //要素数が等しいか
        if(a.length != b.length) {
            return false;
        }
        //要素内容が等しいか
        for(int i = 0; i < a.length; i++) {
            if(a[i] != b[i]) {
                return false;
            }
        }
        return true;
    }
    
    //出力(2つの配列を標準入力し、等しい場合Yesを、等しくない場合Noを出力)
    public static void main(String[] args) {
        Scanner stdIn = new Scanner(System.in);
        //配列aの標準入力
        int a_num = stdIn.nextInt();
        int[] a = new int[a_num];
        for(int i = 0; i < a_num; i++) {
            a[i] = stdIn.nextInt();
        }
        //配列bの標準入力
        int b_num = stdIn.nextInt();
        int[] b = new int[b_num];
        for(int i = 0; i < b_num; i++) {
            b[i] = stdIn.nextInt();
        }
        
        //出力
        System.out.println(equals(a, b)? "Yes" : "No");
    }
}

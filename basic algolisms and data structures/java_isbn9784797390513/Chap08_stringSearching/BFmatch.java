//力まかせ法(Brute Force method)による文字列探索(単純法、素朴法とも)

import java.util.Scanner;

class BFmatch {
    //力まかせ法による文字列探索メソッド定義部分
    static int bfMatch(String txt, String pat) {//第一引数にテキスト、第二引数にパターン。
        int pt = 0;//txtをなぞるポインタ
        int pp = 0;//patをなぞるポインタ
        
        while(pt != txt.length() && pp != pat.length()) {
            if(txt.charAt(pt) == pat.charAt(pp)) {//一致すればポインタを1つ進める
                pt++; 
                pp++;
            }else {
                pt = pt - pp + 1;//ptから比較のためにインクリメントした分を引いて、1進める
                pp = 0;//インデックス番号0に戻す
            }
        }
        if(pp == pat.length()) {
            return pt - pp;//探索成功：ptから比較のために進めた分を引くことで、照合に成功した位置を返す
        }
        return -1;//探索失敗の場合-1を返す
    }
    
    //適当に出力
    pubic static void main(String[] args) {
        Scanner stdIn = new Scanner(System.in);
        System.out.println("テキスト：");
        String s1 = stdIn.next();
        System.out.println("パターン：");
        String s2 = stdIn.next();
        int idx = bfMatch(s1, s2);
        
        if(idx == -1) {
            System.out.println("テキストの中にパターンは存在しません。");
        }else {
            //マッチ直前までの「半角」での文字数を求める
            int len = 0;
            for(int i = 0; i < idx; i++) {
                len += s1.substring(i,i+1).getByte().length;//照合した文字の直前までの文字数を半角換算の値として求める
            }
            len += s2.length();
        }
        
        System.out.println("文字目にマッチします。");
        System.out.println("テキスト："+s1);
        System.out.printf(String.format("パターン:%%%ds/n", len),s2);
    }
}
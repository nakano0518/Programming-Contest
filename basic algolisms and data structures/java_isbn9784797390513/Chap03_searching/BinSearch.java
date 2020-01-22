//2分探索
//2分に探索範囲を分けることを繰り返す方法
//データ構造がソートされていることを利用している

import java.util.Scanner;

class BinSearch {
    //2分探索メソッド
    static int binSearch(int[] a, int n, int key) {
        int pl = 0;//探索範囲先頭のインデックス
        int pr = n-1//探索範囲末尾のインデックス
        do{
            int pc = (pl+pr)/2;//探索範囲中央のインデックス番号
            if(a[pc] == key) {//探索成功
                return pc;
            }else if(a[pc]< key) {//探索範囲を後半に絞込
                pl = pc + 1;
            }else{//探索範囲を前半に絞込
                pr = pc - 1;
            }
        }while(pl <= pr);//plがprを超えると終了。その否定なら繰り返す。
        return -1;//探索失敗
    }
    
    
    //プログラミング実行部分
    public static void main(String[] args) {
        //標準入力
        Scanner stdIn = new Scanner(System.in);
        int num = stdIn.nextInt();
        int[] x = new int[num];
        System.out.println("昇順に入力してください。");
        x[0] = stdIn.nextInt();//条件から外れるので先に設定しておく
        for(int i = 1; i < num; i++) {
            do{
                x[i] = stdIn.nextInt();
            }while(x[i] < x[i-1]);//ひとつ前の要素より小さければ再入力
        }
        System.out.println("探す値:");
        int key = stdIn.nextInt();
        
        int idx = binSearch(x, num, key); 
        //出力
        if(idx == -1) {
            System.out.println("目的の値は存在しません。");
        }else {
            System.out.println("目的の値はx["+idx+"]に存在します");
        }
    }
}

//ちなみに、javaは2分探索を行うメソッドを持つクラスを標準ライブラリとして提供している。
//java.util.Arraysクラスのstatic int binarySearch(Object[] a, Object key)メソッド。
//※paizaで学んだことをもとに作成
//※paizaで出題される問題の解答コードではありません


//完全数(約数の和からその数自身を引いたものが、その数に一致する)か判定するメソッドを作成しておく
import java.util.*;

public class  PerfectNumber {
    //完全数であるか判定するメソッドを作成
    public static boolean hasPerfectNumber(int n) {
        int sum = 0;//約数の和を合計する変数を用意
        //1から順にnを割っていく
        for(int j = 1; j <= n; j++) {
                if(j > (n/j) && (n%j) == 0){//n/jよりもjが大きくなったら終了
                    break;
                }else if(j == n/j) && (n%j) == 0){//イコールになったら、片方だけ足して終了
                    sum += j;
                    break;
                }
                if((n % j) == 0) {//割り切れたら約数なので足す
                    sum += j;
                    sum += (n/j);
                }
            }
            sum -= n;//完全数なのでnを引いておく
            
            if(n == sum) {
                return true;
            }else {
                return false;
            }
    } 
    
    public static void main(String[] args) {
        //標準入力
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        //出力
        System.out.println(hasPerfectNumber(n)? "Yes" : "No");
    }
}
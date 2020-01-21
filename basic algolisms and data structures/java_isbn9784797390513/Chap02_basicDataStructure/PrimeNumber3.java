//1000以下の素数を列挙せよ。

//PrimeNumber2.javaの改良。
//約数の対称性を利用し、計算量を削減する。
//⇒ 「ある整数nは、nの平方根以下のいずれの素数でも割り切れない」ことを利用し改良。

class PrimeNumber3 {
    int idx = 0;
    int[] prime = new int[500];//少なくとも1000の半分用意すれば十分。(対象は2と奇数のみだから)
    
    prime[idx++] = 2;//2は素数である
    prime[idx++] = 3;//3は素数である
    
    for(int n = 5; n <= 1000; n +=2) {//対象は奇数のみ
        boolean flag = false;
        for(int i = 1; prime[i]*prime[i] <= n; i++) {
            if(n % prime[i] == 0) {
                flag = true;
                break;
            }
        }   
        if(!flag) {
            prime[idx++] = n;
        }
    }
    for(int i = 0; i < idx; i++) {
        System.out.println(prime[i]);
    }
}

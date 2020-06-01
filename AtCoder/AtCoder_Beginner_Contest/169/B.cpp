#include <bits/stdc++.h>
using namespace std;

int GetDigit(long long num){
    int digit=0;
    while(num > 0){
        //printf("%lld\n", num);
        num = num/10;
        digit++;
    }
    return digit-1;
}
 
int main() {
    //cout << GetDigit(1000000000);
    int N;
    cin >> N;
    long long cnt = 1;
    int digitCnt = 0;
    bool flag = false;
    for(int i = 0; i < N; i++) {
        long long A;
        scanf("%ld",&A);
        cnt = cnt*A;
        digitCnt = GetDigit(cnt);
        //printf("%lld\n", cnt);
    }
    
    if(cnt != 0 && digitCnt == 18 && cnt != 1000000000000000000) {
            flag = true;
        }
    
    if(flag) {
        cout << "-1" << endl;
    }else{
        printf("%lld\n", cnt);    
    }
    
}
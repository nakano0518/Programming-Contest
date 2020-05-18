#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265358979323846264338327950L
 
int main() {
    long double A, B, H, M;
    cin >> A >> B >> H >> M;
    long double deg = max((30.0L*H + 30.0L*M/60.0L)-6.0L*M, 6.0L*M-(30.0L*H + 30.0L*M/60.0L));
    if(deg > 180.0L) {
        deg = 360.0L - deg;
    }
    
    long double deg_r;

    deg_r  = deg * PI/180.0L;

    long double rsq;
    rsq = A*A + B*B -2.0L*A*B*cos(deg_r);
    
    printf("%20.20Lf\n", sqrtl(rsq));
    return 0;
}

//求められる精度は10^9。桁数の精度が足りず(10^6)、WAしてしまった。
//pi を 2.0L * asin(1.0L) として求めるのではなく、
//#define PI = 3.14159265358979323846264338327950Lとして定義
//coutでは10^6ぐらいまでになるので足りないので、printfで桁数指定で出力。
//そこに気づけたらACできた問題であった。

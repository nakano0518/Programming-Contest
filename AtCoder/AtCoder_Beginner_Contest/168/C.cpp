#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long double A, B, H, M;
    cin >> A >> B >> H >> M;
    long double deg = max((30.0L*H + 30.0L*M/60.0L)-6.0L*M, 6.0L*M-(30.0L*H + 30.0L*M/60.0L));
    if(deg > 180.0L) {
        deg = 360.0L - deg;
    }
    
    long double deg_r, pi, unit, unit_r;
    pi     = 2.0L * asin(1.0L);            /* πの値 */
	unit   = pi / 180.0L;                 /* 度 → ラジアン */
	unit_r = 180.0L / pi;                 /* ラジアン → 度 */

	deg_r  = deg * unit;
	
    long double ans;
    ans = sqrt(A*A + B*B -2.0L*A*B*cos(deg_r));
    printf("%Lf",ans);
    return 0;
}

//上記コードの答えが精度が10^6であり、求められ精度は10^9なのでWA。
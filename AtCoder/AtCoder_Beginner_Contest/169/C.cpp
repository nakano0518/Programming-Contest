#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long A;
    double B;
    cin >> A >> B;
    long long BB = B*100;
    long long ans = A*B;
    printf("%15ld\n", floor(ans/100));
    
}
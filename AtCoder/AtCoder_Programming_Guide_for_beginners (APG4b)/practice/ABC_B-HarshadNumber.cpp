#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    int sum = 0;
    int tmp = N;
    for(int i=0; i<N; i++) {
        sum += tmp % 10;
        tmp /= 10;
        if(tmp < 0) {
            break;
        }
    }
    if(N % sum == 0) {
        cout << "Yes" <<endl;    
    }else {
        cout << "No" <<endl;
    }
}
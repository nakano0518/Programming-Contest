#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    int sum = 0;
    for(int i=0; i<N; i++) {
        int l;
        int r;
        cin >> l >> r;
        int add = r-l+1;
        sum += add;
    }
    
    cout << sum <<endl;
    
}
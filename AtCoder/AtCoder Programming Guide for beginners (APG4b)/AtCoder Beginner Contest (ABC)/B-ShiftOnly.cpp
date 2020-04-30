#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N, A;
    cin >> N;
    int count = 0;
    for(int i = 0; i < N; i++) {
        cin >> A;
        int tmp = 0;
        while(A%2 == 0) {
            A = A / 2;
            tmp++;
        }
        if(i == 0){
            count = tmp;
        }else{
            count = min(count, tmp);    
        }
         
    }
    cout << count << endl;
}
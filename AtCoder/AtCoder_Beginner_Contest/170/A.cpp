#include <bits/stdc++.h>
using namespace std;
 
int main() {
    vector<int> A(5);
    for(int i = 0; i < 5; i++) {
        cin >> A.at(i);
    }
    for(int i = 0; i < 5; i++) {
        if(A.at(i) == 0){
            cout << i+1 << endl;    
        }
    }
    
}
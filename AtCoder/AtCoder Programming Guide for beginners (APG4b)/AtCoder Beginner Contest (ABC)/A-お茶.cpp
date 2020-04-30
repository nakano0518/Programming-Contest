#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string S;
    cin >> S;
    int size = S.size();
    if(S.at(size-1) == 'T') {
        cout << "YES" << endl;    
    }else{
        cout << "NO" << endl;
    }
}
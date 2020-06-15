#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int x, y;
    cin >> x >> y;
    if(4*x-y >= 0 && y-2*x >= 0 && y%2 == 0) { 
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;    
    }
}
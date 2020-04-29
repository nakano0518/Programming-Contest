#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int A, B;
    cin >> A >> B;
    int count = 0;
    for(int i = A; i <= B; i++) {
        int one = i%10;
        int ten = (i/10)%10;
        int thousands = (i/10/10/10)%10; 
        int tenThousands = (i/10/10/10/10)%10;
        
        if(one == tenThousands && ten == thousands) {
            count++;
        }
    }
    cout << count << endl;

}
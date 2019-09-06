#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string S;
    int T;
    cin >> S;
    cin >> T;
    int l {0}, r {0}, u {0}, d {0};
    int count {0};
    
    for (auto s: S) {
        if (s == 'L') {
            l++;
        } else if (s == 'R') {
            r++;
        } else if (s == 'U') {
            u++;
        } else if (s == 'D') {
            d++;
        } else {
            count++;
        }
    }
        
    int ans = abs(l - r) + abs(u - d);
    
    if (T == 1) {
        cout << ans + count << endl;
    } else {
        if (ans > count) {
            cout << ans - count << endl;
        } else {
            cout << (count - ans) % 2 << endl;
        }
    }
    
    return 0;
}
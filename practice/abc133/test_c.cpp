#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
//今の所エラーになってしまう

int main() {
    int l, r;
    cin >> l >> r;
    int num = r - l + 1;
    int ans;
    if(num >= 2019) {
        ans = 0;
    } else {
        int prev = l % 2019;
        for (int i = l; i <= r; i++) {
           if (prev > i % 2019) {
               ans = 0;
               break;
           }
        }
        ans = (prev*(prev + 1)) % 2019;
    }
    cout << ans << endl;
}

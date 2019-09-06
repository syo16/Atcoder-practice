#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string s;

int ans, l, r, n, k, cnt;

int main() {
    cin >> n >> k >> s;
    for (; r < s.size(); r++) {
        if (s[r] == '0') {
            if (r==0 || s[r-1] == '1') cnt++;
        }
        if (cnt > k) {
            while(l < s.size() && s[l] == '1') l++;
            while(l < s.size() && s[l] == '0') l++;
            cnt--;
        }
        ans = max(ans, r-l+1);
    }
    cout << ans << endl;
}

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n+1), b(n);
    for (int i = 0; i < n+1; i++) {
        cin >> a.at(i);
    }
    for (int i = 0; i < n; i++) {
        cin >> b.at(i);
    }

    int ans = 0;
    int tmp = 0;
    for (int i = 0; i < n; i++) {
        tmp = min(a.at(i), b.at(i));
        a.at(i) -= tmp;
        b.at(i) -= tmp;
        ans += tmp;

        tmp = min(a.at(i + 1), b.at(i));
        a.at(i + 1) -= tmp;
        b.at(i) -= tmp;
        ans += tmp;
    }
    cout << ans << endl;
}

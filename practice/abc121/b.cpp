#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m, c;
    cin >> n >> m >> c;
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int a[n][m];
    int ans = 0;
    int point = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            point += a[i][j] * b[j];
        }
        point += c;
        if (point > 0) {
            ans++;
        }
        point = 0;
    }

    cout << ans << endl;
}

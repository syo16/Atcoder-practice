#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    for (int i = 1; i < n - 1; i++) {
        if ((p[i - 1] < p[i] && p[i] < p[i + 1]) || (p[i + 1] < p[i] && p[i] < p[i - 1])) {
            ans++;
        }
    }
    cout << ans << endl;
}

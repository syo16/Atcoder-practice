#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> c(n);
    vector<int> diff(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        diff[i] = v[i] - c[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (diff[i] >= 0) {
            ans += diff[i];
        }
    }
    cout << ans << endl;
}

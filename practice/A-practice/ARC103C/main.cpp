#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    int v[n];
    int ans{0};
    set<int> s;
    for (int i = 0; i < n; i++) {
        cin >> v[n];
        s.insert(v[n]);
    }
    
    if (s.size() == 1) {
        cout << n/2 << endl;
    } else {
        for (int j = 0; j < n; j++) {
            if (j % 2 == 0) {
                if (v[0] != v[j] && j != 0) {
                    ans++;
                }
            } else {
                if (v[1] != v[j] && j != 1) {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
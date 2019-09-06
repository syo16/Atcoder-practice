#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main() {
    int n, m;
    cin >> n >> m;
    ll ans = 0;
    vector<pair<ll, int> > pairs(n);
    for (int i = 0; i < n; i++) {
        ll a;
        int b;
        cin >> a >> b;
        pairs[i] = make_pair(a, b);
    }

    sort(pairs.begin(), pairs.end());

    for (int i = 0; i < n; i++) {
        if (pairs[i].second < m) {
            ans += pairs[i].first * pairs[i].second;
            m -= pairs[i].second;
        } else {
            ans += pairs[i].first * m;
            m -= pairs[i].second - m;
            break;
        }
    }
    cout << ans << endl;
}

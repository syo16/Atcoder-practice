#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

int main() {
    int x, y, z, k;
    cin >> x >> y >> z >> k;
    vector<ll> a(x);
    vector<ll> b(y);
    vector<ll> c(z);
    k = min(3000, x*y*z);

    for (int i = 0; i < x; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < y; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < z; i++) {
        cin >> c[i];
    }
    sort(a.begin(), a.end(), greater<ll>());
    sort(b.begin(), b.end(), greater<ll>());
    sort(c.begin(), c.end(), greater<ll>());
    vector<ll> n(k);
    for (int i = 0; i < k; i++) {
        n[i] =  
    }
}

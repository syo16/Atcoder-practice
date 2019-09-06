#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;

using namespace std;

int main() {
    ll x, y, z, k;
    cin >> x >> y >> z >> k;
    vector<ll> a(x);
    vector<ll> b(y);
    vector<ll> c(z);
    k = 3000 >k ? k : 3000;

    for (ll i = 0; i < x; i++) {
        cin >> a[i];
    }
    for (ll i = 0; i < y; i++) {
        cin >> b[i];
    }
    for (ll i = 0; i < z; i++) {
        cin >> c[i];
    }

    vector<ll> prep_e(x*y);
    ll count = 0;
    for (ll i = 0; i < x; i++) {
       for (ll j = 0; j < y; j++) {
           prep_e[count] = a[i] + b[j];
           count++;
       } 
    }
    sort(prep_e.begin(), prep_e.end(), greater<ll>());
    vector<ll> e(x*y);
    for (ll i = 0; i < x*y; i++) {
        e[i] = prep_e[i];
    }

    vector<ll> ans(k*z);
    count = 0;
    for (ll i = 0; i < k; i++) {
        for (ll j = 0; j < z; j++) {
            ans[count] = e[i] + c[j];
            count++;
        }
    }
    sort(ans.begin(), ans.end(), greater<ll>());

    for (ll i = 0; i < k; i++) {
        cout << ans[i] << endl;
    }
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

ll GCD(ll, ll);

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<ll> gcd(n-1);
    gcd[0] = GCD(a[0], a[1]);
    for(int i = 1; i < n; i++) {
        a[i] = GCD(a[i-1], a[i]);
    }
    cout<< a[n-1] << endl;
}


ll GCD(ll num1, ll num2) {
    if (num1 < num2) {
        ll temp = num1;
        num1 = num2;
        num2 = temp;
    } 

    while(true) {
        int r = num1 % num2;
        if (r == 0) {
            return num2;
        }
        if (r == 1) {
            return 1;
        }
        num1 = num2;
        num2 = r;
    }
}

#include <iostream>
#include <numeric>
typedef long long ll;
using namespace std;

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << (b - b/c - b/d + b/(c*d/__gcd(c, d))) - ((a-1) - (a-1)/c - (a-1)/d + (a-1)/(c*d/__gcd(c,d)));
}

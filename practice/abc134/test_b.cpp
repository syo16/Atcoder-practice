#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    int ans;
    if ((n / (2*d + 1)) == 0) {
        ans = 1;
    } else {
        ans = ceil(float(n) / float(2*d + 1));
    }
    cout << ans << endl;
}

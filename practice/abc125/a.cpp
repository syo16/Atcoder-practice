#include <iostream>
using namespace std;

int main() {
    int a, b, t;
    cin >> a >> b >> t;
    int ans = 0;
    int count = a;
    while(count < t+0.5) { 
        ans += b;
        count += a;
    }

    cout << ans << endl;
}

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> x(n);
    vector<string> u(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        cin >> u[i];
    }
    double ans = 0;
    for (int i = 0; i < n; i++) {
        if (u[i] == "JPY") {
            ans += x[i];
        } else {
            ans += x[i] * 380000;
        }
    }
    cout << ans << endl;
}

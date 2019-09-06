#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int ans;
    ans = a * n >= b ? b : a*n;
    cout << ans << endl;
}

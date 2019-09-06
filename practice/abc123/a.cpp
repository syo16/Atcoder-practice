#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c, d, e, k;
    cin >> a >> b >> c >> d >> e >> k;
    vector<int> n(5);
    n[0] = a;
    n[1] = b;
    n[2] = c;
    n[3] = d;
    n[4] = e;
    sort(n.begin(), n.end());
    int max_distance = n[4] - n[0];
    if (max_distance <= k) {
        cout << "Yay!" << endl;
    } else {
        cout << ":(" << endl;
    }
}
